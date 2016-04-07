STUDENT_ID=580510628
HOMEWORK=HW02_0
TASKNAME=T112_$(HOMEWORK)
OUTPUT=most_frequent_digit

$(OUTPUT): main.o $(HOMEWORK)_$(STUDENT_ID).o
	gcc -Wall -o $(OUTPUT) main.o $(HOMEWORK)_$(STUDENT_ID).o

main.o: main.c $(TASKNAME).h
	gcc -Wall -c main.c

$(HOMEWORK)_$(STUDENT_ID).o: $(HOMEWORK)_$(STUDENT_ID).c $(TASKNAME).h
	gcc -Wall -c $(HOMEWORK)_$(STUDENT_ID).c

clean:
	rm -fv *.o *.exe $(OUTPUT)

