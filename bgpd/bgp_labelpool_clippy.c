#if BGP_LABELPOOL_ENABLE_TESTS
/* start_labelpool_perf_test => "debug bgp lptest start" */
DEFUN_CMD_FUNC_DECL(start_labelpool_perf_test)
#define funcdecl_start_labelpool_perf_test static int start_labelpool_perf_test_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_start_labelpool_perf_test;
DEFUN_CMD_FUNC_TEXT(start_labelpool_perf_test)
{
#if 0 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return start_labelpool_perf_test_magic(self, vty, argc, argv);
}
#endif

#if BGP_LABELPOOL_ENABLE_TESTS
/* show_labelpool_perf_test => "debug bgp lptest show" */
DEFUN_CMD_FUNC_DECL(show_labelpool_perf_test)
#define funcdecl_show_labelpool_perf_test static int show_labelpool_perf_test_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_labelpool_perf_test;
DEFUN_CMD_FUNC_TEXT(show_labelpool_perf_test)
{
#if 0 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return show_labelpool_perf_test_magic(self, vty, argc, argv);
}
#endif

#if BGP_LABELPOOL_ENABLE_TESTS
/* stop_labelpool_perf_test => "debug bgp lptest stop" */
DEFUN_CMD_FUNC_DECL(stop_labelpool_perf_test)
#define funcdecl_stop_labelpool_perf_test static int stop_labelpool_perf_test_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_stop_labelpool_perf_test;
DEFUN_CMD_FUNC_TEXT(stop_labelpool_perf_test)
{
#if 0 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return stop_labelpool_perf_test_magic(self, vty, argc, argv);
}
#endif

#if BGP_LABELPOOL_ENABLE_TESTS
/* clear_labelpool_perf_test => "debug bgp lptest clear" */
DEFUN_CMD_FUNC_DECL(clear_labelpool_perf_test)
#define funcdecl_clear_labelpool_perf_test static int clear_labelpool_perf_test_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_clear_labelpool_perf_test;
DEFUN_CMD_FUNC_TEXT(clear_labelpool_perf_test)
{
#if 0 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return clear_labelpool_perf_test_magic(self, vty, argc, argv);
}
#endif

#if BGP_LABELPOOL_ENABLE_TESTS
/* release_labelpool_perf_test => "debug bgp lptest release test GENERATION$generation every (1-5)$every_nth" */
DEFUN_CMD_FUNC_DECL(release_labelpool_perf_test)
#define funcdecl_release_labelpool_perf_test static int release_labelpool_perf_test_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * generation,\
	long every_nth,\
	const char * every_nth_str __attribute__ ((unused)))
funcdecl_release_labelpool_perf_test;
DEFUN_CMD_FUNC_TEXT(release_labelpool_perf_test)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *generation = NULL;
	long every_nth = 0;
	const char *every_nth_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "generation")) {
			generation = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "every_nth")) {
			every_nth_str = argv[_i]->arg;
			char *_end;
			every_nth = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!generation) {
		vty_out(vty, "Internal CLI error [%s]\n", "generation");
		return CMD_WARNING;
	}
	if (!every_nth_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "every_nth_str");
		return CMD_WARNING;
	}

	return release_labelpool_perf_test_magic(self, vty, argc, argv, generation, every_nth, every_nth_str);
}
#endif

