DOXYFILE_NAME = project_main
all:
	doxygen ./$(DOXYFILE_NAME)

clean:
	rm -rf html
