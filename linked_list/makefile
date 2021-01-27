objs = test_linkedlist.o linked_list.o
test: $(objs)
	gcc -o test $(objs)

test_linkedlist.o: linked_list.h
	gcc -c test_linkedlist.c
linked_list.o: linked_list.h
	gcc -c linked_list.c

.PHONY: clean
clean:
	-rm test $(objs)


