#!/usr/bin/env python3
"""Module documentation goes here
"""

import string
import subprocess
import sys

class TestProblem2:
    """Q & D class to test a student app.
    """
    def __init__(self, test_no):
        self._app = "./problem2"  # name of child proc
        self._test_no = test_no  # mapping to test info below
        self._expected = [  # expected output from child proc
            "Highest inventory item: D351HWF613 quantity: 22943\nLowest inventory item: D2364956T6 quantity: 214\nTotal inventory: 3562690"]
        self._windows_expected = [  # expected output from child proc
            "Highest inventory item: D351HWF613 quantity: 22943\r\nLowest inventory item: D2364956T6 quantity: 214\r\nTotal inventory: 3562690"]
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

        if actual == self._expected[self._test_no] or actual == self._expected[self._test_no] + "\n" or self._windows_expected[self._test_no] or actual == self._windows_expected[self._test_no] + "\r\n":
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
   TestProblem2(0)
