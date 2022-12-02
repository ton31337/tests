/* clear_router_ospf6 => "clear ipv6 ospf6 process [vrf NAME$name]" */
DEFUN_CMD_FUNC_DECL(clear_router_ospf6)
#define funcdecl_clear_router_ospf6 static int clear_router_ospf6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_clear_router_ospf6;
DEFUN_CMD_FUNC_TEXT(clear_router_ospf6)
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

	return clear_router_ospf6_magic(self, vty, argc, argv, name);
}

/* ospf6_send_extra_data => "[no] ospf6 send-extra-data zebra" */
DEFUN_CMD_FUNC_DECL(ospf6_send_extra_data)
#define funcdecl_ospf6_send_extra_data static int ospf6_send_extra_data_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ospf6_send_extra_data;
DEFUN_CMD_FUNC_TEXT(ospf6_send_extra_data)
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

	return ospf6_send_extra_data_magic(self, vty, argc, argv, no);
}

/* ospf6_external_route_aggregation => "summary-address X:X::X:X/M$prefix [tag (1-4294967295)] [{metric (0-16777215) | metric-type (1-2)$mtype}]" */
DEFUN_CMD_FUNC_DECL(ospf6_external_route_aggregation)
#define funcdecl_ospf6_external_route_aggregation static int ospf6_external_route_aggregation_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	long mtype,\
	const char * mtype_str __attribute__ ((unused)))
funcdecl_ospf6_external_route_aggregation;
DEFUN_CMD_FUNC_TEXT(ospf6_external_route_aggregation)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long metric = 0;
	const char *metric_str = NULL;
	long mtype = 0;
	const char *mtype_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "mtype")) {
			mtype_str = argv[_i]->arg;
			char *_end;
			mtype = strtol(argv[_i]->arg, &_end, 10);
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
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return ospf6_external_route_aggregation_magic(self, vty, argc, argv, &prefix, prefix_str, tag, tag_str, metric, metric_str, mtype, mtype_str);
}

/* no_ospf6_external_route_aggregation => "no summary-address X:X::X:X/M$prefix [tag (1-4294967295)] [{metric (0-16777215) | metric-type (1-2)}]" */
DEFUN_CMD_FUNC_DECL(no_ospf6_external_route_aggregation)
#define funcdecl_no_ospf6_external_route_aggregation static int no_ospf6_external_route_aggregation_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	long metric_type,\
	const char * metric_type_str __attribute__ ((unused)))
funcdecl_no_ospf6_external_route_aggregation;
DEFUN_CMD_FUNC_TEXT(no_ospf6_external_route_aggregation)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long metric = 0;
	const char *metric_str = NULL;
	long metric_type = 0;
	const char *metric_type_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "metric_type")) {
			metric_type_str = argv[_i]->arg;
			char *_end;
			metric_type = strtol(argv[_i]->arg, &_end, 10);
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
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return no_ospf6_external_route_aggregation_magic(self, vty, argc, argv, &prefix, prefix_str, tag, tag_str, metric, metric_str, metric_type, metric_type_str);
}

/* ospf6_external_route_aggregation_no_advertise => "summary-address X:X::X:X/M$prefix no-advertise" */
DEFUN_CMD_FUNC_DECL(ospf6_external_route_aggregation_no_advertise)
#define funcdecl_ospf6_external_route_aggregation_no_advertise static int ospf6_external_route_aggregation_no_advertise_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_ospf6_external_route_aggregation_no_advertise;
DEFUN_CMD_FUNC_TEXT(ospf6_external_route_aggregation_no_advertise)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
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
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return ospf6_external_route_aggregation_no_advertise_magic(self, vty, argc, argv, &prefix, prefix_str);
}

/* no_ospf6_external_route_aggregation_no_advertise => "no summary-address X:X::X:X/M$prefix no-advertise" */
DEFUN_CMD_FUNC_DECL(no_ospf6_external_route_aggregation_no_advertise)
#define funcdecl_no_ospf6_external_route_aggregation_no_advertise static int no_ospf6_external_route_aggregation_no_advertise_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_no_ospf6_external_route_aggregation_no_advertise;
DEFUN_CMD_FUNC_TEXT(no_ospf6_external_route_aggregation_no_advertise)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
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
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return no_ospf6_external_route_aggregation_no_advertise_magic(self, vty, argc, argv, &prefix, prefix_str);
}

/* ospf6_route_aggregation_timer => "aggregation timer (5-1800)" */
DEFUN_CMD_FUNC_DECL(ospf6_route_aggregation_timer)
#define funcdecl_ospf6_route_aggregation_timer static int ospf6_route_aggregation_timer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long timer,\
	const char * timer_str __attribute__ ((unused)))
funcdecl_ospf6_route_aggregation_timer;
DEFUN_CMD_FUNC_TEXT(ospf6_route_aggregation_timer)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long timer = 0;
	const char *timer_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "timer")) {
			timer_str = argv[_i]->arg;
			char *_end;
			timer = strtol(argv[_i]->arg, &_end, 10);
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
	if (!timer_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "timer_str");
		return CMD_WARNING;
	}

	return ospf6_route_aggregation_timer_magic(self, vty, argc, argv, timer, timer_str);
}

/* no_ospf6_route_aggregation_timer => "no aggregation timer [5-1800]" */
DEFUN_CMD_FUNC_DECL(no_ospf6_route_aggregation_timer)
#define funcdecl_no_ospf6_route_aggregation_timer static int no_ospf6_route_aggregation_timer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_ospf6_route_aggregation_timer;
DEFUN_CMD_FUNC_TEXT(no_ospf6_route_aggregation_timer)
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

	return no_ospf6_route_aggregation_timer_magic(self, vty, argc, argv);
}

/* show_ipv6_ospf6_external_aggregator => "show ipv6 ospf6 [vrf <NAME|all>] summary-address [detail$detail] [json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_ospf6_external_aggregator)
#define funcdecl_show_ipv6_ospf6_external_aggregator static int show_ipv6_ospf6_external_aggregator_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * detail)
funcdecl_show_ipv6_ospf6_external_aggregator;
DEFUN_CMD_FUNC_TEXT(show_ipv6_ospf6_external_aggregator)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *detail = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_ospf6_external_aggregator_magic(self, vty, argc, argv, vrf, detail);
}

