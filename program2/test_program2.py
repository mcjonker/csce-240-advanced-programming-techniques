#!/usr/bin/env python3
"""Module documentation goes here
"""

import string
import subprocess
import sys

class TestProgram2:
    """Q & D class to test a student app.
    """
    def __init__(self, test_no):
        self._app = "./p2"  # name of child proc
        self._test_no = test_no  # mapping to test info below
        self._expected = [  # expected output from child proc
            "4.7 plus 9.4 equals 14.1\n1.8 minus 4 equals -2.2\n7 times 6 equals 42\n4 divided by 8 equals 0.5\nCould not compute 103.104 modulo 22\n103 modulo 22 equals 15\nUnrecognized operation ^\n-6 modulo 4 equals -2\n2 times 3.63 equals 7.26\nCould not compute 8 divided by 0\n5.25 divided by 2.1 equals 2.5\n"]

        self.test()


    def test(self):
        """Method is called by constructor. It is public, but should not need be
        called explicitly.
        """
        returncode, actual = self._run()

        # remove all non-printable characters
        actual = "".join(filter(lambda x: x in string.printable, actual))

        if returncode != 0:
            print(
                "ERROR: EXPECTED return 0, ACTUAL return {}".format(returncode),
                file=sys.stderr)

        if not actual:
            print("ERROR: No output from student app.", file=sys.stderr)
            sys.exit(1)

        print("STUDENT OUTPUT")
        print("----------------------------------")
        print(f"{actual}")  # this is known as an fstring
        print("----------------------------------")

        if actual == self._expected[self._test_no] or actual == self._expected[self._test_no] + "\n":
            print("CORRECT!")
        else:
            print("INCORRECT...")
            print(f"  Expected:\t{self._expected[self._test_no]}")
            print(f"  Actual:\t{actual}")
            sys.exit(1)


    def _run(self):
        """Does the actual work of running the tested app. Called by test method
        and returns the exit code of app and anything in STDOUT.
        """
        with subprocess.Popen(
                self._app, stderr=subprocess.PIPE,
                stdin=subprocess.PIPE, stdout=subprocess.PIPE) as proc:
            out, _ = proc.communicate()

            try:
                return proc.returncode, out.decode("utf-8") if out else None
            except UnicodeDecodeError as decode_exception:
                return proc.returncode, \
                       "ERROR! {}".format(decode_exception)


if __name__ == "__main__":
   TestProgram2(0)
