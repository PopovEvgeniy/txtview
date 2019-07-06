install:
	@echo Installation in progress. Please wait
	@gcc txtview.c -g0 -O0 -o txtview
	@chmod ugo+rx txtview
	@cp -f -p txtview /bin/
	@echo Installation was successfuly complete
uninstall:
	@rm -f /bin/txtview
	@echo Uninstallation was successfuly complete