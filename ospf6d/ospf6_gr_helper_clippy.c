/* ospf6_gr_helper_enable => "graceful-restart helper enable [A.B.C.D$rtr_id]" */
DEFUN_CMD_FUNC_DECL(ospf6_gr_helper_enable)
#define funcdecl_ospf6_gr_helper_enable static int ospf6_gr_helper_enable_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr rtr_id,\
	const char * rtr_id_str __attribute__ ((unused)))
funcdecl_ospf6_gr_helper_enable;
DEFUN_CMD_FUNC_TEXT(ospf6_gr_helper_enable)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr rtr_id = { INADDR_ANY };
	const char *rtr_id_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rtr_id")) {
			rtr_id_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &rtr_id);
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

	return ospf6_gr_helper_enable_magic(self, vty, argc, argv, rtr_id, rtr_id_str);
}

/* ospf6_gr_helper_disable => "no graceful-restart helper enable [A.B.C.D$rtr_id]" */
DEFUN_CMD_FUNC_DECL(ospf6_gr_helper_disable)
#define funcdecl_ospf6_gr_helper_disable static int ospf6_gr_helper_disable_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr rtr_id,\
	const char * rtr_id_str __attribute__ ((unused)))
funcdecl_ospf6_gr_helper_disable;
DEFUN_CMD_FUNC_TEXT(ospf6_gr_helper_disable)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr rtr_id = { INADDR_ANY };
	const char *rtr_id_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rtr_id")) {
			rtr_id_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &rtr_id);
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

	return ospf6_gr_helper_disable_magic(self, vty, argc, argv, rtr_id, rtr_id_str);
}

/* ospf6_gr_helper_disable_lsacheck => "graceful-restart helper lsa-check-disable" */
DEFUN_CMD_FUNC_DECL(ospf6_gr_helper_disable_lsacheck)
#define funcdecl_ospf6_gr_helper_disable_lsacheck static int ospf6_gr_helper_disable_lsacheck_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_ospf6_gr_helper_disable_lsacheck;
DEFUN_CMD_FUNC_TEXT(ospf6_gr_helper_disable_lsacheck)
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

	return ospf6_gr_helper_disable_lsacheck_magic(self, vty, argc, argv);
}

/* no_ospf6_gr_helper_disable_lsacheck => "no graceful-restart helper lsa-check-disable" */
DEFUN_CMD_FUNC_DECL(no_ospf6_gr_helper_disable_lsacheck)
#define funcdecl_no_ospf6_gr_helper_disable_lsacheck static int no_ospf6_gr_helper_disable_lsacheck_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_ospf6_gr_helper_disable_lsacheck;
DEFUN_CMD_FUNC_TEXT(no_ospf6_gr_helper_disable_lsacheck)
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

	return no_ospf6_gr_helper_disable_lsacheck_magic(self, vty, argc, argv);
}

/* ospf6_gr_helper_planned_only => "graceful-restart helper planned-only" */
DEFUN_CMD_FUNC_DECL(ospf6_gr_helper_planned_only)
#define funcdecl_ospf6_gr_helper_planned_only static int ospf6_gr_helper_planned_only_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_ospf6_gr_helper_planned_only;
DEFUN_CMD_FUNC_TEXT(ospf6_gr_helper_planned_only)
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

	return ospf6_gr_helper_planned_only_magic(self, vty, argc, argv);
}

/* no_ospf6_gr_helper_planned_only => "no graceful-restart helper planned-only" */
DEFUN_CMD_FUNC_DECL(no_ospf6_gr_helper_planned_only)
#define funcdecl_no_ospf6_gr_helper_planned_only static int no_ospf6_gr_helper_planned_only_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_ospf6_gr_helper_planned_only;
DEFUN_CMD_FUNC_TEXT(no_ospf6_gr_helper_planned_only)
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

	return no_ospf6_gr_helper_planned_only_magic(self, vty, argc, argv);
}

/* ospf6_gr_helper_supported_grace_time => "graceful-restart helper supported-grace-time (10-1800)$interval" */
DEFUN_CMD_FUNC_DECL(ospf6_gr_helper_supported_grace_time)
#define funcdecl_ospf6_gr_helper_supported_grace_time static int ospf6_gr_helper_supported_grace_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_ospf6_gr_helper_supported_grace_time;
DEFUN_CMD_FUNC_TEXT(ospf6_gr_helper_supported_grace_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long interval = 0;
	const char *interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "interval")) {
			interval_str = argv[_i]->arg;
			char *_end;
			interval = strtol(argv[_i]->arg, &_end, 10);
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
	if (!interval_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "interval_str");
		return CMD_WARNING;
	}

	return ospf6_gr_helper_supported_grace_time_magic(self, vty, argc, argv, interval, interval_str);
}

/* no_ospf6_gr_helper_supported_grace_time => "no graceful-restart helper supported-grace-time (10-1800)$interval" */
DEFUN_CMD_FUNC_DECL(no_ospf6_gr_helper_supported_grace_time)
#define funcdecl_no_ospf6_gr_helper_supported_grace_time static int no_ospf6_gr_helper_supported_grace_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_no_ospf6_gr_helper_supported_grace_time;
DEFUN_CMD_FUNC_TEXT(no_ospf6_gr_helper_supported_grace_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long interval = 0;
	const char *interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "interval")) {
			interval_str = argv[_i]->arg;
			char *_end;
			interval = strtol(argv[_i]->arg, &_end, 10);
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
	if (!interval_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "interval_str");
		return CMD_WARNING;
	}

	return no_ospf6_gr_helper_supported_grace_time_magic(self, vty, argc, argv, interval, interval_str);
}

/* show_ipv6_ospf6_gr_helper => "show ipv6 ospf6 graceful-restart helper [detail] [json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_ospf6_gr_helper)
#define funcdecl_show_ipv6_ospf6_gr_helper static int show_ipv6_ospf6_gr_helper_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_ipv6_ospf6_gr_helper;
DEFUN_CMD_FUNC_TEXT(show_ipv6_ospf6_gr_helper)
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

	return show_ipv6_ospf6_gr_helper_magic(self, vty, argc, argv);
}

/* debug_ospf6_gr => "[no$no] debug ospf6 graceful-restart" */
DEFUN_CMD_FUNC_DECL(debug_ospf6_gr)
#define funcdecl_debug_ospf6_gr static int debug_ospf6_gr_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_ospf6_gr;
DEFUN_CMD_FUNC_TEXT(debug_ospf6_gr)
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

	return debug_ospf6_gr_magic(self, vty, argc, argv, no);
}

