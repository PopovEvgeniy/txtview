install:
	@echo Installation in progress. Please wait
	@gcc txtview.c -g0 -O0 -o /bin/txtview
	@chmod ugo+rx /bin/txtview
	@echo Installation was successfuly complete
uninstall:
	@rm -f /bin/txtview
	@echo Uninstallation was successfuly complete