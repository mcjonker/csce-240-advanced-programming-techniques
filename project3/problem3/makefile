geographiclocation.o : geographiclocation.h geographiclocation.cc
	g++ -Wall -std=c++17 -I . -c geographiclocation.cc

testgeographiclocationconstructor : geographiclocation.o geographiclocation.h testgeographiclocationconstructor.cc
	g++ -Wall -std=c++17 -I . testgeographiclocationconstructor.cc geographiclocation.o
	./a.out

testsetlatitude : geographiclocation.o geographiclocation.h testsetlatitude.cc
	g++ -Wall -std=c++17 -I . testsetlatitude.cc geographiclocation.o
	./a.out

testsetlongitude : geographiclocation.o geographiclocation.h testsetlongitude.cc
	g++ -Wall -std=c++17 -I . testsetlongitude.cc geographiclocation.o
	./a.out

checkit : checkit.cc
	g++ -Wall -std=c++17 checkit.cc -o checkit

testgeographiclocationprint : testgeographiclocationprint.cc geographiclocation.o checkit
	g++ -Wall -std=c++17 -I . testgeographiclocationprint.cc geographiclocation.o
	./a.out > ./output/studentglprint.txt
	./checkit 0

historicsite.o : geographiclocation.h historicsite.h historicsite.cc
	g++ -Wall -std=c++17 -I . -c historicsite.cc

testhistoricsiteconstructor : geographiclocation.o geographiclocation.h historicsite.o historicsite.h testhistoricsiteconstructor.cc
	g++ -Wall -std=c++17 -I . testhistoricsiteconstructor.cc geographiclocation.o historicsite.o
	./a.out

testsetdescription : geographiclocation.o geographiclocation.h historicsite.o historicsite.h testsetdescription.cc
	g++ -Wall -std=c++17 -I . testsetdescription.cc geographiclocation.o historicsite.o
	./a.out

testsetyearestablished : geographiclocation.o geographiclocation.h historicsite.o historicsite.h testsetyearestablished.cc
	g++ -Wall -std=c++17 -I . testsetyearestablished.cc geographiclocation.o historicsite.o
	./a.out

testhistoricsiteprint : testhistoricsiteprint.cc geographiclocation.o historicsite.o checkit
	g++ -Wall -std=c++17 -I . testhistoricsiteprint.cc geographiclocation.o historicsite.o
	./a.out > ./output/studenthsprint.txt
	./checkit 1

testsites : testsites.cc geographiclocation.o historicsite.o checkit
	g++ -Wall -std=c++17 -I . testsites.cc geographiclocation.o historicsite.o
	./a.out > ./output/studenttestsites.txt
	./checkit 2

clean :
	rm a.out *.o ./output/student*
