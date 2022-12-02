/* clear_ip_pim_statistics => "clear ip pim statistics [vrf NAME]$name" */
DEFUN_CMD_FUNC_DECL(clear_ip_pim_statistics)
#define funcdecl_clear_ip_pim_statistics static int clear_ip_pim_statistics_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_clear_ip_pim_statistics;
DEFUN_CMD_FUNC_TEXT(clear_ip_pim_statistics)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ip_pim_statistics_magic(self, vty, argc, argv, name);
}

/* clear_ip_mroute => "clear ip mroute [vrf NAME]$name" */
DEFUN_CMD_FUNC_DECL(clear_ip_mroute)
#define funcdecl_clear_ip_mroute static int clear_ip_mroute_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_clear_ip_mroute;
DEFUN_CMD_FUNC_TEXT(clear_ip_mroute)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ip_mroute_magic(self, vty, argc, argv, name);
}

/* clear_ip_pim_interfaces => "clear ip pim [vrf NAME] interfaces" */
DEFUN_CMD_FUNC_DECL(clear_ip_pim_interfaces)
#define funcdecl_clear_ip_pim_interfaces static int clear_ip_pim_interfaces_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_clear_ip_pim_interfaces;
DEFUN_CMD_FUNC_TEXT(clear_ip_pim_interfaces)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ip_pim_interfaces_magic(self, vty, argc, argv, vrf);
}

/* clear_ip_pim_interface_traffic => "clear ip pim [vrf NAME] interface traffic" */
DEFUN_CMD_FUNC_DECL(clear_ip_pim_interface_traffic)
#define funcdecl_clear_ip_pim_interface_traffic static int clear_ip_pim_interface_traffic_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_clear_ip_pim_interface_traffic;
DEFUN_CMD_FUNC_TEXT(clear_ip_pim_interface_traffic)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ip_pim_interface_traffic_magic(self, vty, argc, argv, vrf);
}

/* clear_ip_pim_oil => "clear ip pim [vrf NAME]$name oil" */
DEFUN_CMD_FUNC_DECL(clear_ip_pim_oil)
#define funcdecl_clear_ip_pim_oil static int clear_ip_pim_oil_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_clear_ip_pim_oil;
DEFUN_CMD_FUNC_TEXT(clear_ip_pim_oil)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ip_pim_oil_magic(self, vty, argc, argv, name);
}

/* show_ip_pim_interface => "show ip pim [mlag$mlag] [vrf NAME] interface [detail|WORD]$interface [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_interface)
#define funcdecl_show_ip_pim_interface static int show_ip_pim_interface_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * mlag,\
	const char * vrf,\
	const char * interface,\
	const char * json)
funcdecl_show_ip_pim_interface;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_interface)
{
#if 4 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *mlag = NULL;
	const char *vrf = NULL;
	const char *interface = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "mlag")) {
			mlag = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "interface")) {
			interface = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_interface_magic(self, vty, argc, argv, mlag, vrf, interface, json);
}

/* show_ip_pim_interface_vrf_all => "show ip pim [mlag$mlag] vrf all interface [detail|WORD]$interface [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_interface_vrf_all)
#define funcdecl_show_ip_pim_interface_vrf_all static int show_ip_pim_interface_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * mlag,\
	const char * interface,\
	const char * json)
funcdecl_show_ip_pim_interface_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_interface_vrf_all)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *mlag = NULL;
	const char *interface = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "mlag")) {
			mlag = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "interface")) {
			interface = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_interface_vrf_all_magic(self, vty, argc, argv, mlag, interface, json);
}

/* show_ip_pim_join => "show ip pim [vrf NAME] join [A.B.C.D$s_or_g [A.B.C.D$g]] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_join)
#define funcdecl_show_ip_pim_join static int show_ip_pim_join_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	struct in_addr s_or_g,\
	const char * s_or_g_str __attribute__ ((unused)),\
	struct in_addr g,\
	const char * g_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_pim_join;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_join)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct in_addr s_or_g = { INADDR_ANY };
	const char *s_or_g_str = NULL;
	struct in_addr g = { INADDR_ANY };
	const char *g_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "s_or_g")) {
			s_or_g_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &s_or_g);
		}
		if (!strcmp(argv[_i]->varname, "g")) {
			g_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &g);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_join_magic(self, vty, argc, argv, vrf, s_or_g, s_or_g_str, g, g_str, json);
}

/* show_ip_pim_join_vrf_all => "show ip pim vrf all join [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_join_vrf_all)
#define funcdecl_show_ip_pim_join_vrf_all static int show_ip_pim_join_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_pim_join_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_join_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_join_vrf_all_magic(self, vty, argc, argv, json);
}

/* show_ip_pim_jp_agg => "show ip pim [vrf NAME] jp-agg" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_jp_agg)
#define funcdecl_show_ip_pim_jp_agg static int show_ip_pim_jp_agg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_show_ip_pim_jp_agg;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_jp_agg)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_jp_agg_magic(self, vty, argc, argv, vrf);
}

/* show_ip_pim_local_membership => "show ip pim [vrf NAME] local-membership [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_local_membership)
#define funcdecl_show_ip_pim_local_membership static int show_ip_pim_local_membership_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ip_pim_local_membership;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_local_membership)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_local_membership_magic(self, vty, argc, argv, vrf, json);
}

/* show_ip_pim_neighbor => "show ip pim [vrf NAME] neighbor [detail|WORD]$interface [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_neighbor)
#define funcdecl_show_ip_pim_neighbor static int show_ip_pim_neighbor_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * interface,\
	const char * json)
funcdecl_show_ip_pim_neighbor;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_neighbor)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *interface = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "interface")) {
			interface = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_neighbor_magic(self, vty, argc, argv, vrf, interface, json);
}

/* show_ip_pim_neighbor_vrf_all => "show ip pim vrf all neighbor [detail|WORD]$interface [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_neighbor_vrf_all)
#define funcdecl_show_ip_pim_neighbor_vrf_all static int show_ip_pim_neighbor_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * interface,\
	const char * json)
funcdecl_show_ip_pim_neighbor_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_neighbor_vrf_all)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *interface = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "interface")) {
			interface = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_neighbor_vrf_all_magic(self, vty, argc, argv, interface, json);
}

/* show_ip_pim_secondary => "show ip pim [vrf NAME] secondary" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_secondary)
#define funcdecl_show_ip_pim_secondary static int show_ip_pim_secondary_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_show_ip_pim_secondary;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_secondary)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_secondary_magic(self, vty, argc, argv, vrf);
}

/* show_ip_pim_state => "show ip pim [vrf NAME] state [A.B.C.D$s_or_g [A.B.C.D$g]] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_state)
#define funcdecl_show_ip_pim_state static int show_ip_pim_state_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	struct in_addr s_or_g,\
	const char * s_or_g_str __attribute__ ((unused)),\
	struct in_addr g,\
	const char * g_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_pim_state;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_state)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct in_addr s_or_g = { INADDR_ANY };
	const char *s_or_g_str = NULL;
	struct in_addr g = { INADDR_ANY };
	const char *g_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "s_or_g")) {
			s_or_g_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &s_or_g);
		}
		if (!strcmp(argv[_i]->varname, "g")) {
			g_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &g);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_state_magic(self, vty, argc, argv, vrf, s_or_g, s_or_g_str, g, g_str, json);
}

/* show_ip_pim_state_vrf_all => "show ip pim vrf all state [A.B.C.D$s_or_g [A.B.C.D$g]] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_state_vrf_all)
#define funcdecl_show_ip_pim_state_vrf_all static int show_ip_pim_state_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr s_or_g,\
	const char * s_or_g_str __attribute__ ((unused)),\
	struct in_addr g,\
	const char * g_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_pim_state_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_state_vrf_all)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr s_or_g = { INADDR_ANY };
	const char *s_or_g_str = NULL;
	struct in_addr g = { INADDR_ANY };
	const char *g_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "s_or_g")) {
			s_or_g_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &s_or_g);
		}
		if (!strcmp(argv[_i]->varname, "g")) {
			g_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &g);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_state_vrf_all_magic(self, vty, argc, argv, s_or_g, s_or_g_str, g, g_str, json);
}

/* show_ip_pim_upstream => "show ip pim [vrf NAME] upstream [A.B.C.D$s_or_g [A.B.C.D$g]] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_upstream)
#define funcdecl_show_ip_pim_upstream static int show_ip_pim_upstream_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	struct in_addr s_or_g,\
	const char * s_or_g_str __attribute__ ((unused)),\
	struct in_addr g,\
	const char * g_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_pim_upstream;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_upstream)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct in_addr s_or_g = { INADDR_ANY };
	const char *s_or_g_str = NULL;
	struct in_addr g = { INADDR_ANY };
	const char *g_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "s_or_g")) {
			s_or_g_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &s_or_g);
		}
		if (!strcmp(argv[_i]->varname, "g")) {
			g_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &g);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_upstream_magic(self, vty, argc, argv, vrf, s_or_g, s_or_g_str, g, g_str, json);
}

/* show_ip_pim_upstream_vrf_all => "show ip pim vrf all upstream [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_upstream_vrf_all)
#define funcdecl_show_ip_pim_upstream_vrf_all static int show_ip_pim_upstream_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_pim_upstream_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_upstream_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_upstream_vrf_all_magic(self, vty, argc, argv, json);
}

/* show_ip_pim_channel => "show ip pim [vrf NAME] channel [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_channel)
#define funcdecl_show_ip_pim_channel static int show_ip_pim_channel_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ip_pim_channel;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_channel)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_channel_magic(self, vty, argc, argv, vrf, json);
}

/* show_ip_pim_upstream_join_desired => "show ip pim [vrf NAME] upstream-join-desired [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_upstream_join_desired)
#define funcdecl_show_ip_pim_upstream_join_desired static int show_ip_pim_upstream_join_desired_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ip_pim_upstream_join_desired;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_upstream_join_desired)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_upstream_join_desired_magic(self, vty, argc, argv, vrf, json);
}

/* show_ip_pim_upstream_rpf => "show ip pim [vrf NAME] upstream-rpf [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_upstream_rpf)
#define funcdecl_show_ip_pim_upstream_rpf static int show_ip_pim_upstream_rpf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ip_pim_upstream_rpf;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_upstream_rpf)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_upstream_rpf_magic(self, vty, argc, argv, vrf, json);
}

/* show_ip_pim_rp => "show ip pim [vrf NAME] rp-info [A.B.C.D/M$group] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_rp)
#define funcdecl_show_ip_pim_rp static int show_ip_pim_rp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const struct prefix_ipv4 * group,\
	const char * group_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_pim_rp;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_rp)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct prefix_ipv4 group = { };
	const char *group_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "group")) {
			group_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &group);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_rp_magic(self, vty, argc, argv, vrf, &group, group_str, json);
}

/* show_ip_pim_rp_vrf_all => "show ip pim vrf all rp-info [A.B.C.D/M$group] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_rp_vrf_all)
#define funcdecl_show_ip_pim_rp_vrf_all static int show_ip_pim_rp_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix_ipv4 * group,\
	const char * group_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_pim_rp_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_rp_vrf_all)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix_ipv4 group = { };
	const char *group_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "group")) {
			group_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &group);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_rp_vrf_all_magic(self, vty, argc, argv, &group, group_str, json);
}

/* show_ip_pim_rpf => "show ip pim [vrf NAME] rpf [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_rpf)
#define funcdecl_show_ip_pim_rpf static int show_ip_pim_rpf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ip_pim_rpf;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_rpf)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_rpf_magic(self, vty, argc, argv, vrf, json);
}

/* show_ip_pim_rpf_vrf_all => "show ip pim vrf all rpf [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_rpf_vrf_all)
#define funcdecl_show_ip_pim_rpf_vrf_all static int show_ip_pim_rpf_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_pim_rpf_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_rpf_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_rpf_vrf_all_magic(self, vty, argc, argv, json);
}

/* show_ip_pim_nexthop => "show ip pim [vrf NAME] nexthop [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_nexthop)
#define funcdecl_show_ip_pim_nexthop static int show_ip_pim_nexthop_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ip_pim_nexthop;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_nexthop)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_nexthop_magic(self, vty, argc, argv, vrf, json);
}

/* show_ip_pim_nexthop_lookup => "show ip pim [vrf NAME] nexthop-lookup A.B.C.D$source A.B.C.D$group" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_nexthop_lookup)
#define funcdecl_show_ip_pim_nexthop_lookup static int show_ip_pim_nexthop_lookup_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	struct in_addr source,\
	const char * source_str __attribute__ ((unused)),\
	struct in_addr group,\
	const char * group_str __attribute__ ((unused)))
funcdecl_show_ip_pim_nexthop_lookup;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_nexthop_lookup)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct in_addr source = { INADDR_ANY };
	const char *source_str = NULL;
	struct in_addr group = { INADDR_ANY };
	const char *group_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &source);
		}
		if (!strcmp(argv[_i]->varname, "group")) {
			group_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &group);
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
	if (!source_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "source_str");
		return CMD_WARNING;
	}
	if (!group_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "group_str");
		return CMD_WARNING;
	}

	return show_ip_pim_nexthop_lookup_magic(self, vty, argc, argv, vrf, source, source_str, group, group_str);
}

/* show_ip_pim_interface_traffic => "show ip pim [vrf NAME] interface traffic [WORD$if_name] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_interface_traffic)
#define funcdecl_show_ip_pim_interface_traffic static int show_ip_pim_interface_traffic_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * if_name,\
	const char * json)
funcdecl_show_ip_pim_interface_traffic;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_interface_traffic)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *if_name = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "if_name")) {
			if_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_interface_traffic_magic(self, vty, argc, argv, vrf, if_name, json);
}

/* show_ip_pim_statistics => "show ip pim [vrf NAME] statistics [interface WORD$word] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_pim_statistics)
#define funcdecl_show_ip_pim_statistics static int show_ip_pim_statistics_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * word,\
	const char * json)
funcdecl_show_ip_pim_statistics;
DEFUN_CMD_FUNC_TEXT(show_ip_pim_statistics)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *word = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "word")) {
			word = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_pim_statistics_magic(self, vty, argc, argv, vrf, word, json);
}

/* show_ip_multicast => "show ip multicast [vrf NAME]" */
DEFUN_CMD_FUNC_DECL(show_ip_multicast)
#define funcdecl_show_ip_multicast static int show_ip_multicast_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_show_ip_multicast;
DEFUN_CMD_FUNC_TEXT(show_ip_multicast)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_multicast_magic(self, vty, argc, argv, vrf);
}

/* show_ip_multicast_vrf_all => "show ip multicast vrf all" */
DEFUN_CMD_FUNC_DECL(show_ip_multicast_vrf_all)
#define funcdecl_show_ip_multicast_vrf_all static int show_ip_multicast_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_ip_multicast_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_multicast_vrf_all)
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

	return show_ip_multicast_vrf_all_magic(self, vty, argc, argv);
}

/* show_ip_multicast_count => "show ip multicast count [vrf NAME] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_multicast_count)
#define funcdecl_show_ip_multicast_count static int show_ip_multicast_count_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ip_multicast_count;
DEFUN_CMD_FUNC_TEXT(show_ip_multicast_count)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_multicast_count_magic(self, vty, argc, argv, vrf, json);
}

/* show_ip_multicast_count_vrf_all => "show ip multicast count vrf all [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_multicast_count_vrf_all)
#define funcdecl_show_ip_multicast_count_vrf_all static int show_ip_multicast_count_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_multicast_count_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_multicast_count_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_multicast_count_vrf_all_magic(self, vty, argc, argv, json);
}

/* show_ip_mroute => "show ip mroute [vrf NAME] [A.B.C.D$s_or_g [A.B.C.D$g]] [fill$fill] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_mroute)
#define funcdecl_show_ip_mroute static int show_ip_mroute_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	struct in_addr s_or_g,\
	const char * s_or_g_str __attribute__ ((unused)),\
	struct in_addr g,\
	const char * g_str __attribute__ ((unused)),\
	const char * fill,\
	const char * json)
funcdecl_show_ip_mroute;
DEFUN_CMD_FUNC_TEXT(show_ip_mroute)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct in_addr s_or_g = { INADDR_ANY };
	const char *s_or_g_str = NULL;
	struct in_addr g = { INADDR_ANY };
	const char *g_str = NULL;
	const char *fill = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "s_or_g")) {
			s_or_g_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &s_or_g);
		}
		if (!strcmp(argv[_i]->varname, "g")) {
			g_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &g);
		}
		if (!strcmp(argv[_i]->varname, "fill")) {
			fill = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_mroute_magic(self, vty, argc, argv, vrf, s_or_g, s_or_g_str, g, g_str, fill, json);
}

/* show_ip_mroute_vrf_all => "show ip mroute vrf all [fill$fill] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_mroute_vrf_all)
#define funcdecl_show_ip_mroute_vrf_all static int show_ip_mroute_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * fill,\
	const char * json)
funcdecl_show_ip_mroute_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_mroute_vrf_all)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *fill = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "fill")) {
			fill = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_mroute_vrf_all_magic(self, vty, argc, argv, fill, json);
}

/* clear_ip_mroute_count => "clear ip mroute [vrf NAME]$name count" */
DEFUN_CMD_FUNC_DECL(clear_ip_mroute_count)
#define funcdecl_clear_ip_mroute_count static int clear_ip_mroute_count_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_clear_ip_mroute_count;
DEFUN_CMD_FUNC_TEXT(clear_ip_mroute_count)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ip_mroute_count_magic(self, vty, argc, argv, name);
}

/* show_ip_mroute_count => "show ip mroute [vrf NAME] count [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_mroute_count)
#define funcdecl_show_ip_mroute_count static int show_ip_mroute_count_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ip_mroute_count;
DEFUN_CMD_FUNC_TEXT(show_ip_mroute_count)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_mroute_count_magic(self, vty, argc, argv, vrf, json);
}

/* show_ip_mroute_count_vrf_all => "show ip mroute vrf all count [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_mroute_count_vrf_all)
#define funcdecl_show_ip_mroute_count_vrf_all static int show_ip_mroute_count_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_mroute_count_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_mroute_count_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_mroute_count_vrf_all_magic(self, vty, argc, argv, json);
}

/* show_ip_mroute_summary => "show ip mroute [vrf NAME] summary [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_mroute_summary)
#define funcdecl_show_ip_mroute_summary static int show_ip_mroute_summary_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ip_mroute_summary;
DEFUN_CMD_FUNC_TEXT(show_ip_mroute_summary)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_mroute_summary_magic(self, vty, argc, argv, vrf, json);
}

/* show_ip_mroute_summary_vrf_all => "show ip mroute vrf all summary [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_mroute_summary_vrf_all)
#define funcdecl_show_ip_mroute_summary_vrf_all static int show_ip_mroute_summary_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ip_mroute_summary_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ip_mroute_summary_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_mroute_summary_vrf_all_magic(self, vty, argc, argv, json);
}

/* ip_pim_spt_switchover_infinity_plist => "ip pim spt-switchover infinity-and-beyond prefix-list WORD$plist" */
DEFUN_CMD_FUNC_DECL(ip_pim_spt_switchover_infinity_plist)
#define funcdecl_ip_pim_spt_switchover_infinity_plist static int ip_pim_spt_switchover_infinity_plist_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * plist)
funcdecl_ip_pim_spt_switchover_infinity_plist;
DEFUN_CMD_FUNC_TEXT(ip_pim_spt_switchover_infinity_plist)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *plist = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "plist")) {
			plist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!plist) {
		vty_out(vty, "Internal CLI error [%s]\n", "plist");
		return CMD_WARNING;
	}

	return ip_pim_spt_switchover_infinity_plist_magic(self, vty, argc, argv, plist);
}

/* pim_register_accept_list => "[no] ip pim register-accept-list WORD$word" */
DEFUN_CMD_FUNC_DECL(pim_register_accept_list)
#define funcdecl_pim_register_accept_list static int pim_register_accept_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * word)
funcdecl_pim_register_accept_list;
DEFUN_CMD_FUNC_TEXT(pim_register_accept_list)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *word = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "word")) {
			word = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!word) {
		vty_out(vty, "Internal CLI error [%s]\n", "word");
		return CMD_WARNING;
	}

	return pim_register_accept_list_magic(self, vty, argc, argv, no, word);
}

/* ip_pim_joinprune_time => "ip pim join-prune-interval (1-65535)$jpi" */
DEFUN_CMD_FUNC_DECL(ip_pim_joinprune_time)
#define funcdecl_ip_pim_joinprune_time static int ip_pim_joinprune_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long jpi,\
	const char * jpi_str __attribute__ ((unused)))
funcdecl_ip_pim_joinprune_time;
DEFUN_CMD_FUNC_TEXT(ip_pim_joinprune_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long jpi = 0;
	const char *jpi_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "jpi")) {
			jpi_str = argv[_i]->arg;
			char *_end;
			jpi = strtol(argv[_i]->arg, &_end, 10);
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
	if (!jpi_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "jpi_str");
		return CMD_WARNING;
	}

	return ip_pim_joinprune_time_magic(self, vty, argc, argv, jpi, jpi_str);
}

/* ip_pim_register_suppress => "ip pim register-suppress-time (1-65535)$rst" */
DEFUN_CMD_FUNC_DECL(ip_pim_register_suppress)
#define funcdecl_ip_pim_register_suppress static int ip_pim_register_suppress_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long rst,\
	const char * rst_str __attribute__ ((unused)))
funcdecl_ip_pim_register_suppress;
DEFUN_CMD_FUNC_TEXT(ip_pim_register_suppress)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long rst = 0;
	const char *rst_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rst")) {
			rst_str = argv[_i]->arg;
			char *_end;
			rst = strtol(argv[_i]->arg, &_end, 10);
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
	if (!rst_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rst_str");
		return CMD_WARNING;
	}

	return ip_pim_register_suppress_magic(self, vty, argc, argv, rst, rst_str);
}

/* ip_pim_rp_keep_alive => "ip pim rp keep-alive-timer (1-65535)$kat" */
DEFUN_CMD_FUNC_DECL(ip_pim_rp_keep_alive)
#define funcdecl_ip_pim_rp_keep_alive static int ip_pim_rp_keep_alive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long kat,\
	const char * kat_str __attribute__ ((unused)))
funcdecl_ip_pim_rp_keep_alive;
DEFUN_CMD_FUNC_TEXT(ip_pim_rp_keep_alive)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long kat = 0;
	const char *kat_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "kat")) {
			kat_str = argv[_i]->arg;
			char *_end;
			kat = strtol(argv[_i]->arg, &_end, 10);
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
	if (!kat_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "kat_str");
		return CMD_WARNING;
	}

	return ip_pim_rp_keep_alive_magic(self, vty, argc, argv, kat, kat_str);
}

/* ip_pim_keep_alive => "ip pim keep-alive-timer (1-65535)$kat" */
DEFUN_CMD_FUNC_DECL(ip_pim_keep_alive)
#define funcdecl_ip_pim_keep_alive static int ip_pim_keep_alive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long kat,\
	const char * kat_str __attribute__ ((unused)))
funcdecl_ip_pim_keep_alive;
DEFUN_CMD_FUNC_TEXT(ip_pim_keep_alive)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long kat = 0;
	const char *kat_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "kat")) {
			kat_str = argv[_i]->arg;
			char *_end;
			kat = strtol(argv[_i]->arg, &_end, 10);
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
	if (!kat_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "kat_str");
		return CMD_WARNING;
	}

	return ip_pim_keep_alive_magic(self, vty, argc, argv, kat, kat_str);
}

/* ip_pim_packets => "ip pim packets (1-255)" */
DEFUN_CMD_FUNC_DECL(ip_pim_packets)
#define funcdecl_ip_pim_packets static int ip_pim_packets_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long packets,\
	const char * packets_str __attribute__ ((unused)))
funcdecl_ip_pim_packets;
DEFUN_CMD_FUNC_TEXT(ip_pim_packets)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long packets = 0;
	const char *packets_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "packets")) {
			packets_str = argv[_i]->arg;
			char *_end;
			packets = strtol(argv[_i]->arg, &_end, 10);
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
	if (!packets_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "packets_str");
		return CMD_WARNING;
	}

	return ip_pim_packets_magic(self, vty, argc, argv, packets, packets_str);
}

/* ip_igmp_group_watermark => "ip igmp watermark-warn (1-65535)$limit" */
DEFUN_CMD_FUNC_DECL(ip_igmp_group_watermark)
#define funcdecl_ip_igmp_group_watermark static int ip_igmp_group_watermark_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long limit,\
	const char * limit_str __attribute__ ((unused)))
funcdecl_ip_igmp_group_watermark;
DEFUN_CMD_FUNC_TEXT(ip_igmp_group_watermark)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long limit = 0;
	const char *limit_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "limit")) {
			limit_str = argv[_i]->arg;
			char *_end;
			limit = strtol(argv[_i]->arg, &_end, 10);
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
	if (!limit_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "limit_str");
		return CMD_WARNING;
	}

	return ip_igmp_group_watermark_magic(self, vty, argc, argv, limit, limit_str);
}

/* no_ip_igmp_group_watermark => "no ip igmp watermark-warn [(1-65535)$limit]" */
DEFUN_CMD_FUNC_DECL(no_ip_igmp_group_watermark)
#define funcdecl_no_ip_igmp_group_watermark static int no_ip_igmp_group_watermark_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long limit,\
	const char * limit_str __attribute__ ((unused)))
funcdecl_no_ip_igmp_group_watermark;
DEFUN_CMD_FUNC_TEXT(no_ip_igmp_group_watermark)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long limit = 0;
	const char *limit_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "limit")) {
			limit_str = argv[_i]->arg;
			char *_end;
			limit = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ip_igmp_group_watermark_magic(self, vty, argc, argv, limit, limit_str);
}

/* ip_pim_rp => "ip pim rp A.B.C.D$rp [A.B.C.D/M]$gp" */
DEFUN_CMD_FUNC_DECL(ip_pim_rp)
#define funcdecl_ip_pim_rp static int ip_pim_rp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const struct prefix_ipv4 * gp,\
	const char * gp_str __attribute__ ((unused)))
funcdecl_ip_pim_rp;
DEFUN_CMD_FUNC_TEXT(ip_pim_rp)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr rp = { INADDR_ANY };
	const char *rp_str = NULL;
	struct prefix_ipv4 gp = { };
	const char *gp_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "gp")) {
			gp_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &gp);
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}

	return ip_pim_rp_magic(self, vty, argc, argv, rp, rp_str, &gp, gp_str);
}

/* ip_pim_rp_prefix_list => "ip pim rp A.B.C.D$rp prefix-list WORD$plist" */
DEFUN_CMD_FUNC_DECL(ip_pim_rp_prefix_list)
#define funcdecl_ip_pim_rp_prefix_list static int ip_pim_rp_prefix_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const char * plist)
funcdecl_ip_pim_rp_prefix_list;
DEFUN_CMD_FUNC_TEXT(ip_pim_rp_prefix_list)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr rp = { INADDR_ANY };
	const char *rp_str = NULL;
	const char *plist = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "plist")) {
			plist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}
	if (!plist) {
		vty_out(vty, "Internal CLI error [%s]\n", "plist");
		return CMD_WARNING;
	}

	return ip_pim_rp_prefix_list_magic(self, vty, argc, argv, rp, rp_str, plist);
}

/* no_ip_pim_rp => "no ip pim rp A.B.C.D$rp [A.B.C.D/M]$gp" */
DEFUN_CMD_FUNC_DECL(no_ip_pim_rp)
#define funcdecl_no_ip_pim_rp static int no_ip_pim_rp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const struct prefix_ipv4 * gp,\
	const char * gp_str __attribute__ ((unused)))
funcdecl_no_ip_pim_rp;
DEFUN_CMD_FUNC_TEXT(no_ip_pim_rp)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr rp = { INADDR_ANY };
	const char *rp_str = NULL;
	struct prefix_ipv4 gp = { };
	const char *gp_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "gp")) {
			gp_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &gp);
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}

	return no_ip_pim_rp_magic(self, vty, argc, argv, rp, rp_str, &gp, gp_str);
}

/* no_ip_pim_rp_prefix_list => "no ip pim rp A.B.C.D$rp prefix-list WORD$plist" */
DEFUN_CMD_FUNC_DECL(no_ip_pim_rp_prefix_list)
#define funcdecl_no_ip_pim_rp_prefix_list static int no_ip_pim_rp_prefix_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const char * plist)
funcdecl_no_ip_pim_rp_prefix_list;
DEFUN_CMD_FUNC_TEXT(no_ip_pim_rp_prefix_list)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr rp = { INADDR_ANY };
	const char *rp_str = NULL;
	const char *plist = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "plist")) {
			plist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}
	if (!plist) {
		vty_out(vty, "Internal CLI error [%s]\n", "plist");
		return CMD_WARNING;
	}

	return no_ip_pim_rp_prefix_list_magic(self, vty, argc, argv, rp, rp_str, plist);
}

/* interface_ip_igmp_query_max_response_time => "ip igmp query-max-response-time (1-65535)$qmrt" */
DEFUN_CMD_FUNC_DECL(interface_ip_igmp_query_max_response_time)
#define funcdecl_interface_ip_igmp_query_max_response_time static int interface_ip_igmp_query_max_response_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long qmrt,\
	const char * qmrt_str __attribute__ ((unused)))
funcdecl_interface_ip_igmp_query_max_response_time;
DEFUN_CMD_FUNC_TEXT(interface_ip_igmp_query_max_response_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long qmrt = 0;
	const char *qmrt_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "qmrt")) {
			qmrt_str = argv[_i]->arg;
			char *_end;
			qmrt = strtol(argv[_i]->arg, &_end, 10);
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
	if (!qmrt_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "qmrt_str");
		return CMD_WARNING;
	}

	return interface_ip_igmp_query_max_response_time_magic(self, vty, argc, argv, qmrt, qmrt_str);
}

/* interface_ip_igmp_last_member_query_count => "ip igmp last-member-query-count (1-255)$lmqc" */
DEFUN_CMD_FUNC_DECL(interface_ip_igmp_last_member_query_count)
#define funcdecl_interface_ip_igmp_last_member_query_count static int interface_ip_igmp_last_member_query_count_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long lmqc,\
	const char * lmqc_str __attribute__ ((unused)))
funcdecl_interface_ip_igmp_last_member_query_count;
DEFUN_CMD_FUNC_TEXT(interface_ip_igmp_last_member_query_count)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long lmqc = 0;
	const char *lmqc_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "lmqc")) {
			lmqc_str = argv[_i]->arg;
			char *_end;
			lmqc = strtol(argv[_i]->arg, &_end, 10);
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
	if (!lmqc_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "lmqc_str");
		return CMD_WARNING;
	}

	return interface_ip_igmp_last_member_query_count_magic(self, vty, argc, argv, lmqc, lmqc_str);
}

/* interface_ip_igmp_last_member_query_interval => "ip igmp last-member-query-interval (1-65535)$lmqi" */
DEFUN_CMD_FUNC_DECL(interface_ip_igmp_last_member_query_interval)
#define funcdecl_interface_ip_igmp_last_member_query_interval static int interface_ip_igmp_last_member_query_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long lmqi,\
	const char * lmqi_str __attribute__ ((unused)))
funcdecl_interface_ip_igmp_last_member_query_interval;
DEFUN_CMD_FUNC_TEXT(interface_ip_igmp_last_member_query_interval)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long lmqi = 0;
	const char *lmqi_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "lmqi")) {
			lmqi_str = argv[_i]->arg;
			char *_end;
			lmqi = strtol(argv[_i]->arg, &_end, 10);
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
	if (!lmqi_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "lmqi_str");
		return CMD_WARNING;
	}

	return interface_ip_igmp_last_member_query_interval_magic(self, vty, argc, argv, lmqi, lmqi_str);
}

/* interface_ip_igmp_query_generate => "ip igmp generate-query-once [version (2-3)]" */
DEFUN_CMD_FUNC_DECL(interface_ip_igmp_query_generate)
#define funcdecl_interface_ip_igmp_query_generate static int interface_ip_igmp_query_generate_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long version,\
	const char * version_str __attribute__ ((unused)))
funcdecl_interface_ip_igmp_query_generate;
DEFUN_CMD_FUNC_TEXT(interface_ip_igmp_query_generate)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long version = 0;
	const char *version_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "version")) {
			version_str = argv[_i]->arg;
			char *_end;
			version = strtol(argv[_i]->arg, &_end, 10);
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

	return interface_ip_igmp_query_generate_magic(self, vty, argc, argv, version, version_str);
}

/* pim_test_sg_keepalive => "test pim [vrf NAME$name] keepalive-reset A.B.C.D$source A.B.C.D$group" */
DEFUN_CMD_FUNC_DECL(pim_test_sg_keepalive)
#define funcdecl_pim_test_sg_keepalive static int pim_test_sg_keepalive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name,\
	struct in_addr source,\
	const char * source_str __attribute__ ((unused)),\
	struct in_addr group,\
	const char * group_str __attribute__ ((unused)))
funcdecl_pim_test_sg_keepalive;
DEFUN_CMD_FUNC_TEXT(pim_test_sg_keepalive)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;
	struct in_addr source = { INADDR_ANY };
	const char *source_str = NULL;
	struct in_addr group = { INADDR_ANY };
	const char *group_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &source);
		}
		if (!strcmp(argv[_i]->varname, "group")) {
			group_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &group);
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
	if (!source_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "source_str");
		return CMD_WARNING;
	}
	if (!group_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "group_str");
		return CMD_WARNING;
	}

	return pim_test_sg_keepalive_magic(self, vty, argc, argv, name, source, source_str, group, group_str);
}

/* interface_ip_pim_activeactive => "[no$no] ip pim active-active" */
DEFUN_CMD_FUNC_DECL(interface_ip_pim_activeactive)
#define funcdecl_interface_ip_pim_activeactive static int interface_ip_pim_activeactive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_interface_ip_pim_activeactive;
DEFUN_CMD_FUNC_TEXT(interface_ip_pim_activeactive)
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

	return interface_ip_pim_activeactive_magic(self, vty, argc, argv, no);
}

/* interface_ip_pim => "ip pim [passive$passive]" */
DEFUN_CMD_FUNC_DECL(interface_ip_pim)
#define funcdecl_interface_ip_pim static int interface_ip_pim_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * passive)
funcdecl_interface_ip_pim;
DEFUN_CMD_FUNC_TEXT(interface_ip_pim)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *passive = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "passive")) {
			passive = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return interface_ip_pim_magic(self, vty, argc, argv, passive);
}

/* interface_no_ip_pim => "no ip pim [passive$passive]" */
DEFUN_CMD_FUNC_DECL(interface_no_ip_pim)
#define funcdecl_interface_no_ip_pim static int interface_no_ip_pim_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * passive)
funcdecl_interface_no_ip_pim;
DEFUN_CMD_FUNC_TEXT(interface_no_ip_pim)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *passive = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "passive")) {
			passive = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return interface_no_ip_pim_magic(self, vty, argc, argv, passive);
}

/* debug_pim => "[no] debug pim" */
DEFUN_CMD_FUNC_DECL(debug_pim)
#define funcdecl_debug_pim static int debug_pim_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pim;
DEFUN_CMD_FUNC_TEXT(debug_pim)
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

	return debug_pim_magic(self, vty, argc, argv, no);
}

/* debug_pim_nht => "[no] debug pim nht" */
DEFUN_CMD_FUNC_DECL(debug_pim_nht)
#define funcdecl_debug_pim_nht static int debug_pim_nht_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pim_nht;
DEFUN_CMD_FUNC_TEXT(debug_pim_nht)
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

	return debug_pim_nht_magic(self, vty, argc, argv, no);
}

/* debug_pim_nht_det => "[no] debug pim nht detail" */
DEFUN_CMD_FUNC_DECL(debug_pim_nht_det)
#define funcdecl_debug_pim_nht_det static int debug_pim_nht_det_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pim_nht_det;
DEFUN_CMD_FUNC_TEXT(debug_pim_nht_det)
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

	return debug_pim_nht_det_magic(self, vty, argc, argv, no);
}

/* debug_pim_events => "[no] debug pim events" */
DEFUN_CMD_FUNC_DECL(debug_pim_events)
#define funcdecl_debug_pim_events static int debug_pim_events_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pim_events;
DEFUN_CMD_FUNC_TEXT(debug_pim_events)
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

	return debug_pim_events_magic(self, vty, argc, argv, no);
}

/* debug_pim_packets => "[no] debug pim packets [<hello$hello|joins$joins|register$registers>]" */
DEFUN_CMD_FUNC_DECL(debug_pim_packets)
#define funcdecl_debug_pim_packets static int debug_pim_packets_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * hello,\
	const char * joins,\
	const char * registers)
funcdecl_debug_pim_packets;
DEFUN_CMD_FUNC_TEXT(debug_pim_packets)
{
#if 4 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *hello = NULL;
	const char *joins = NULL;
	const char *registers = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "hello")) {
			hello = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "joins")) {
			joins = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "registers")) {
			registers = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return debug_pim_packets_magic(self, vty, argc, argv, no, hello, joins, registers);
}

/* debug_pim_packetdump_send => "[no] debug pim packet-dump send" */
DEFUN_CMD_FUNC_DECL(debug_pim_packetdump_send)
#define funcdecl_debug_pim_packetdump_send static int debug_pim_packetdump_send_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pim_packetdump_send;
DEFUN_CMD_FUNC_TEXT(debug_pim_packetdump_send)
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

	return debug_pim_packetdump_send_magic(self, vty, argc, argv, no);
}

/* debug_pim_packetdump_recv => "[no] debug pim packet-dump receive" */
DEFUN_CMD_FUNC_DECL(debug_pim_packetdump_recv)
#define funcdecl_debug_pim_packetdump_recv static int debug_pim_packetdump_recv_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pim_packetdump_recv;
DEFUN_CMD_FUNC_TEXT(debug_pim_packetdump_recv)
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

	return debug_pim_packetdump_recv_magic(self, vty, argc, argv, no);
}

/* debug_pim_trace => "[no] debug pim trace" */
DEFUN_CMD_FUNC_DECL(debug_pim_trace)
#define funcdecl_debug_pim_trace static int debug_pim_trace_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pim_trace;
DEFUN_CMD_FUNC_TEXT(debug_pim_trace)
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

	return debug_pim_trace_magic(self, vty, argc, argv, no);
}

/* debug_pim_trace_detail => "[no] debug pim trace detail" */
DEFUN_CMD_FUNC_DECL(debug_pim_trace_detail)
#define funcdecl_debug_pim_trace_detail static int debug_pim_trace_detail_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pim_trace_detail;
DEFUN_CMD_FUNC_TEXT(debug_pim_trace_detail)
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

	return debug_pim_trace_detail_magic(self, vty, argc, argv, no);
}

/* debug_pim_zebra => "[no] debug pim zebra" */
DEFUN_CMD_FUNC_DECL(debug_pim_zebra)
#define funcdecl_debug_pim_zebra static int debug_pim_zebra_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pim_zebra;
DEFUN_CMD_FUNC_TEXT(debug_pim_zebra)
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

	return debug_pim_zebra_magic(self, vty, argc, argv, no);
}

/* ip_pim_bfd => "ip pim bfd [profile BFDPROF$prof]" */
DEFUN_CMD_FUNC_DECL(ip_pim_bfd)
#define funcdecl_ip_pim_bfd static int ip_pim_bfd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * prof)
funcdecl_ip_pim_bfd;
DEFUN_CMD_FUNC_TEXT(ip_pim_bfd)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *prof = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prof")) {
			prof = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return ip_pim_bfd_magic(self, vty, argc, argv, prof);
}

/* no_ip_pim_bfd_profile => "no ip pim bfd profile [BFDPROF]" */
DEFUN_CMD_FUNC_DECL(no_ip_pim_bfd_profile)
#define funcdecl_no_ip_pim_bfd_profile static int no_ip_pim_bfd_profile_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * bfdprof)
funcdecl_no_ip_pim_bfd_profile;
DEFUN_CMD_FUNC_TEXT(no_ip_pim_bfd_profile)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *bfdprof = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bfdprof")) {
			bfdprof = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_ip_pim_bfd_profile_magic(self, vty, argc, argv, bfdprof);
}

/* ip_msdp_peer => "ip msdp peer A.B.C.D$peer source A.B.C.D$source" */
DEFUN_CMD_FUNC_DECL(ip_msdp_peer)
#define funcdecl_ip_msdp_peer static int ip_msdp_peer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr peer,\
	const char * peer_str __attribute__ ((unused)),\
	struct in_addr source,\
	const char * source_str __attribute__ ((unused)))
funcdecl_ip_msdp_peer;
DEFUN_CMD_FUNC_TEXT(ip_msdp_peer)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr peer = { INADDR_ANY };
	const char *peer_str = NULL;
	struct in_addr source = { INADDR_ANY };
	const char *source_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "peer")) {
			peer_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &peer);
		}
		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &source);
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
	if (!peer_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "peer_str");
		return CMD_WARNING;
	}
	if (!source_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "source_str");
		return CMD_WARNING;
	}

	return ip_msdp_peer_magic(self, vty, argc, argv, peer, peer_str, source, source_str);
}

/* ip_msdp_timers => "ip msdp timers (1-65535)$keepalive (1-65535)$holdtime [(1-65535)$connretry]" */
DEFUN_CMD_FUNC_DECL(ip_msdp_timers)
#define funcdecl_ip_msdp_timers static int ip_msdp_timers_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long keepalive,\
	const char * keepalive_str __attribute__ ((unused)),\
	long holdtime,\
	const char * holdtime_str __attribute__ ((unused)),\
	long connretry,\
	const char * connretry_str __attribute__ ((unused)))
funcdecl_ip_msdp_timers;
DEFUN_CMD_FUNC_TEXT(ip_msdp_timers)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long keepalive = 0;
	const char *keepalive_str = NULL;
	long holdtime = 0;
	const char *holdtime_str = NULL;
	long connretry = 0;
	const char *connretry_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "keepalive")) {
			keepalive_str = argv[_i]->arg;
			char *_end;
			keepalive = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "holdtime")) {
			holdtime_str = argv[_i]->arg;
			char *_end;
			holdtime = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "connretry")) {
			connretry_str = argv[_i]->arg;
			char *_end;
			connretry = strtol(argv[_i]->arg, &_end, 10);
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
	if (!keepalive_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "keepalive_str");
		return CMD_WARNING;
	}
	if (!holdtime_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "holdtime_str");
		return CMD_WARNING;
	}

	return ip_msdp_timers_magic(self, vty, argc, argv, keepalive, keepalive_str, holdtime, holdtime_str, connretry, connretry_str);
}

/* no_ip_msdp_timers => "no ip msdp timers [(1-65535) (1-65535) [(1-65535)]]" */
DEFUN_CMD_FUNC_DECL(no_ip_msdp_timers)
#define funcdecl_no_ip_msdp_timers static int no_ip_msdp_timers_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long timers,\
	const char * timers_str __attribute__ ((unused)))
funcdecl_no_ip_msdp_timers;
DEFUN_CMD_FUNC_TEXT(no_ip_msdp_timers)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long timers = 0;
	const char *timers_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "timers")) {
			timers_str = argv[_i]->arg;
			char *_end;
			timers = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ip_msdp_timers_magic(self, vty, argc, argv, timers, timers_str);
}

/* ip_msdp_mesh_group_member => "ip msdp mesh-group WORD$gname member A.B.C.D$maddr" */
DEFUN_CMD_FUNC_DECL(ip_msdp_mesh_group_member)
#define funcdecl_ip_msdp_mesh_group_member static int ip_msdp_mesh_group_member_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * gname,\
	struct in_addr maddr,\
	const char * maddr_str __attribute__ ((unused)))
funcdecl_ip_msdp_mesh_group_member;
DEFUN_CMD_FUNC_TEXT(ip_msdp_mesh_group_member)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *gname = NULL;
	struct in_addr maddr = { INADDR_ANY };
	const char *maddr_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "gname")) {
			gname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "maddr")) {
			maddr_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &maddr);
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
	if (!gname) {
		vty_out(vty, "Internal CLI error [%s]\n", "gname");
		return CMD_WARNING;
	}
	if (!maddr_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "maddr_str");
		return CMD_WARNING;
	}

	return ip_msdp_mesh_group_member_magic(self, vty, argc, argv, gname, maddr, maddr_str);
}

/* no_ip_msdp_mesh_group_member => "no ip msdp mesh-group WORD$gname member A.B.C.D$maddr" */
DEFUN_CMD_FUNC_DECL(no_ip_msdp_mesh_group_member)
#define funcdecl_no_ip_msdp_mesh_group_member static int no_ip_msdp_mesh_group_member_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * gname,\
	struct in_addr maddr,\
	const char * maddr_str __attribute__ ((unused)))
funcdecl_no_ip_msdp_mesh_group_member;
DEFUN_CMD_FUNC_TEXT(no_ip_msdp_mesh_group_member)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *gname = NULL;
	struct in_addr maddr = { INADDR_ANY };
	const char *maddr_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "gname")) {
			gname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "maddr")) {
			maddr_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &maddr);
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
	if (!gname) {
		vty_out(vty, "Internal CLI error [%s]\n", "gname");
		return CMD_WARNING;
	}
	if (!maddr_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "maddr_str");
		return CMD_WARNING;
	}

	return no_ip_msdp_mesh_group_member_magic(self, vty, argc, argv, gname, maddr, maddr_str);
}

/* ip_msdp_mesh_group_source => "ip msdp mesh-group WORD$gname source A.B.C.D$saddr" */
DEFUN_CMD_FUNC_DECL(ip_msdp_mesh_group_source)
#define funcdecl_ip_msdp_mesh_group_source static int ip_msdp_mesh_group_source_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * gname,\
	struct in_addr saddr,\
	const char * saddr_str __attribute__ ((unused)))
funcdecl_ip_msdp_mesh_group_source;
DEFUN_CMD_FUNC_TEXT(ip_msdp_mesh_group_source)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *gname = NULL;
	struct in_addr saddr = { INADDR_ANY };
	const char *saddr_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "gname")) {
			gname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "saddr")) {
			saddr_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &saddr);
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
	if (!gname) {
		vty_out(vty, "Internal CLI error [%s]\n", "gname");
		return CMD_WARNING;
	}
	if (!saddr_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "saddr_str");
		return CMD_WARNING;
	}

	return ip_msdp_mesh_group_source_magic(self, vty, argc, argv, gname, saddr, saddr_str);
}

/* no_ip_msdp_mesh_group_source => "no ip msdp mesh-group WORD$gname source [A.B.C.D]" */
DEFUN_CMD_FUNC_DECL(no_ip_msdp_mesh_group_source)
#define funcdecl_no_ip_msdp_mesh_group_source static int no_ip_msdp_mesh_group_source_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * gname,\
	struct in_addr source,\
	const char * source_str __attribute__ ((unused)))
funcdecl_no_ip_msdp_mesh_group_source;
DEFUN_CMD_FUNC_TEXT(no_ip_msdp_mesh_group_source)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *gname = NULL;
	struct in_addr source = { INADDR_ANY };
	const char *source_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "gname")) {
			gname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &source);
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
	if (!gname) {
		vty_out(vty, "Internal CLI error [%s]\n", "gname");
		return CMD_WARNING;
	}

	return no_ip_msdp_mesh_group_source_magic(self, vty, argc, argv, gname, source, source_str);
}

/* no_ip_msdp_mesh_group => "no ip msdp mesh-group WORD$gname" */
DEFUN_CMD_FUNC_DECL(no_ip_msdp_mesh_group)
#define funcdecl_no_ip_msdp_mesh_group static int no_ip_msdp_mesh_group_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * gname)
funcdecl_no_ip_msdp_mesh_group;
DEFUN_CMD_FUNC_TEXT(no_ip_msdp_mesh_group)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *gname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "gname")) {
			gname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!gname) {
		vty_out(vty, "Internal CLI error [%s]\n", "gname");
		return CMD_WARNING;
	}

	return no_ip_msdp_mesh_group_magic(self, vty, argc, argv, gname);
}

