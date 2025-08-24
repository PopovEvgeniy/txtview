install:
	@echo Installation in progress. Please wait
	@$(CC) txtview.c -g0 -O0 -o /bin/txtview
	@chmod ugo+rx /bin/txtview
	@echo Installation was successfully completed
uninstall:
	@rm -f /bin/txtview
	@echo Uninstallation was successfully completed