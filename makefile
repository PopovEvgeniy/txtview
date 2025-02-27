install:
	@echo Installation in progress. Please wait
	@$(CC) txtview.c -g0 -O0 -o /bin/txtview
	@chmod ugo+rx /bin/txtview
	@echo Installation successfully complete
uninstall:
	@rm -f /bin/txtview
	@echo Uninstallation successfully complete