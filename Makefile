

test:
	@gcc -w -o run_test src/$(TARGET).c __test__/utils.c __test__/$(TARGET).c
	@exec ./run_test
	@rm ./run_test
