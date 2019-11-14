vpath %.c ./Src
vpath %.h ./Lnc
vpath %.o ./Dependencies
cc= gcc_S

Link_target = App.exe
Obj = main.o LCD.o DIO.o code.o
Src_path = ./Src/
Include_path = ./Lnc/
Obj_path = ./Dependencies/

all: $(Link_target)

clean :
	-rm  $(Link_target) $(Obj_path)*.o
	
main.o : main.c main.h LCD.h DIO.h 
	$(cc) -c -I$(Include_path) $< -o $(Obj_path)$@
	
LCD.o : LCD.c LCD.h DIO.h  
	$(cc) -c -I$(Include_path) $< -o $(Obj_path)$@
	
DIO.o : DIO.c DIO.h code.h
	$(cc) -c  -I$(Include_path) $< -o $(Obj_path)$@

code.o : code.c code.h
	$(cc) -c  -I$(Include_path) $< -o $(Obj_path)$@

$(Link_target) : $(Obj)
	$(cc) $(Obj_path)*.o -o $@