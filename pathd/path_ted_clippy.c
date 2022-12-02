/* debug_path_ted => "[no] debug pathd mpls-te" */
DEFUN_CMD_FUNC_DECL(debug_path_ted)
#define funcdecl_debug_path_ted static int debug_path_ted_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_path_ted;
DEFUN_CMD_FUNC_TEXT(debug_path_ted)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
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

	return debug_path_ted_magic(self, vty, argc, argv, no);
}

/* path_ted_import => "mpls-te import <ospfv2|ospfv3|isis>$import_daemon" */
DEFUN_CMD_FUNC_DECL(path_ted_import)
#define funcdecl_path_ted_import static int path_ted_import_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * import_daemon)
funcdecl_path_ted_import;
DEFUN_CMD_FUNC_TEXT(path_ted_import)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *import_daemon = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "import_daemon")) {
			import_daemon = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
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
	if (!import_daemon) {
		vty_out(vty, "Internal CLI error [%s]\n", "import_daemon");
		return CMD_WARNING;
	}

	return path_ted_import_magic(self, vty, argc, argv, import_daemon);
}

/* show_pathd_ted_db => "show pathd ted database <verbose|json>$ver_json " */
DEFUN_CMD_FUNC_DECL(show_pathd_ted_db)
#define funcdecl_show_pathd_ted_db static int show_pathd_ted_db_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ver_json)
funcdecl_show_pathd_ted_db;
DEFUN_CMD_FUNC_TEXT(show_pathd_ted_db)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ver_json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ver_json")) {
			ver_json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
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
	if (!ver_json) {
		vty_out(vty, "Internal CLI error [%s]\n", "ver_json");
		return CMD_WARNING;
	}

	return show_pathd_ted_db_magic(self, vty, argc, argv, ver_json);
}

