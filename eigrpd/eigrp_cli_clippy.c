/* router_eigrp => "router eigrp (1-65535)$as [vrf NAME]" */
DEFUN_CMD_FUNC_DECL(router_eigrp)
#define funcdecl_router_eigrp static int router_eigrp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long as,\
	const char * as_str __attribute__ ((unused)),\
	const char * vrf)
funcdecl_router_eigrp;
DEFUN_CMD_FUNC_TEXT(router_eigrp)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long as = 0;
	const char *as_str = NULL;
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "as")) {
			as_str = argv[_i]->arg;
			char *_end;
			as = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!as_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "as_str");
		return CMD_WARNING;
	}

	return router_eigrp_magic(self, vty, argc, argv, as, as_str, vrf);
}

/* no_router_eigrp => "no router eigrp (1-65535)$as [vrf NAME]" */
DEFUN_CMD_FUNC_DECL(no_router_eigrp)
#define funcdecl_no_router_eigrp static int no_router_eigrp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long as,\
	const char * as_str __attribute__ ((unused)),\
	const char * vrf)
funcdecl_no_router_eigrp;
DEFUN_CMD_FUNC_TEXT(no_router_eigrp)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long as = 0;
	const char *as_str = NULL;
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "as")) {
			as_str = argv[_i]->arg;
			char *_end;
			as = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!as_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "as_str");
		return CMD_WARNING;
	}

	return no_router_eigrp_magic(self, vty, argc, argv, as, as_str, vrf);
}

/* eigrp_router_id => "eigrp router-id A.B.C.D$addr" */
DEFUN_CMD_FUNC_DECL(eigrp_router_id)
#define funcdecl_eigrp_router_id static int eigrp_router_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr addr,\
	const char * addr_str __attribute__ ((unused)))
funcdecl_eigrp_router_id;
DEFUN_CMD_FUNC_TEXT(eigrp_router_id)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr addr = { INADDR_ANY };
	const char *addr_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "addr")) {
			addr_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &addr);
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
	if (!addr_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "addr_str");
		return CMD_WARNING;
	}

	return eigrp_router_id_magic(self, vty, argc, argv, addr, addr_str);
}

/* no_eigrp_router_id => "no eigrp router-id [A.B.C.D]" */
DEFUN_CMD_FUNC_DECL(no_eigrp_router_id)
#define funcdecl_no_eigrp_router_id static int no_eigrp_router_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr router_id,\
	const char * router_id_str __attribute__ ((unused)))
funcdecl_no_eigrp_router_id;
DEFUN_CMD_FUNC_TEXT(no_eigrp_router_id)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr router_id = { INADDR_ANY };
	const char *router_id_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "router_id")) {
			router_id_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &router_id);
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

	return no_eigrp_router_id_magic(self, vty, argc, argv, router_id, router_id_str);
}

/* eigrp_passive_interface => "[no] passive-interface IFNAME" */
DEFUN_CMD_FUNC_DECL(eigrp_passive_interface)
#define funcdecl_eigrp_passive_interface static int eigrp_passive_interface_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * ifname)
funcdecl_eigrp_passive_interface;
DEFUN_CMD_FUNC_TEXT(eigrp_passive_interface)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *ifname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!ifname) {
		vty_out(vty, "Internal CLI error [%s]\n", "ifname");
		return CMD_WARNING;
	}

	return eigrp_passive_interface_magic(self, vty, argc, argv, no, ifname);
}

/* eigrp_timers_active => "timers active-time <(1-65535)$timer|disabled$disabled>" */
DEFUN_CMD_FUNC_DECL(eigrp_timers_active)
#define funcdecl_eigrp_timers_active static int eigrp_timers_active_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long timer,\
	const char * timer_str __attribute__ ((unused)),\
	const char * disabled)
funcdecl_eigrp_timers_active;
DEFUN_CMD_FUNC_TEXT(eigrp_timers_active)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long timer = 0;
	const char *timer_str = NULL;
	const char *disabled = NULL;

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
		if (!strcmp(argv[_i]->varname, "disabled")) {
			disabled = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return eigrp_timers_active_magic(self, vty, argc, argv, timer, timer_str, disabled);
}

/* no_eigrp_timers_active => "no timers active-time [<(1-65535)|disabled>]" */
DEFUN_CMD_FUNC_DECL(no_eigrp_timers_active)
#define funcdecl_no_eigrp_timers_active static int no_eigrp_timers_active_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long active_time,\
	const char * active_time_str __attribute__ ((unused)))
funcdecl_no_eigrp_timers_active;
DEFUN_CMD_FUNC_TEXT(no_eigrp_timers_active)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long active_time = 0;
	const char *active_time_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "active_time")) {
			active_time_str = argv[_i]->arg;
			char *_end;
			active_time = strtol(argv[_i]->arg, &_end, 10);
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

	return no_eigrp_timers_active_magic(self, vty, argc, argv, active_time, active_time_str);
}

/* eigrp_variance => "variance (1-128)$variance" */
DEFUN_CMD_FUNC_DECL(eigrp_variance)
#define funcdecl_eigrp_variance static int eigrp_variance_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long variance,\
	const char * variance_str __attribute__ ((unused)))
funcdecl_eigrp_variance;
DEFUN_CMD_FUNC_TEXT(eigrp_variance)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long variance = 0;
	const char *variance_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "variance")) {
			variance_str = argv[_i]->arg;
			char *_end;
			variance = strtol(argv[_i]->arg, &_end, 10);
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
	if (!variance_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "variance_str");
		return CMD_WARNING;
	}

	return eigrp_variance_magic(self, vty, argc, argv, variance, variance_str);
}

/* no_eigrp_variance => "no variance [(1-128)]" */
DEFUN_CMD_FUNC_DECL(no_eigrp_variance)
#define funcdecl_no_eigrp_variance static int no_eigrp_variance_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long variance,\
	const char * variance_str __attribute__ ((unused)))
funcdecl_no_eigrp_variance;
DEFUN_CMD_FUNC_TEXT(no_eigrp_variance)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long variance = 0;
	const char *variance_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "variance")) {
			variance_str = argv[_i]->arg;
			char *_end;
			variance = strtol(argv[_i]->arg, &_end, 10);
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

	return no_eigrp_variance_magic(self, vty, argc, argv, variance, variance_str);
}

/* eigrp_maximum_paths => "maximum-paths (1-32)$maximum_paths" */
DEFUN_CMD_FUNC_DECL(eigrp_maximum_paths)
#define funcdecl_eigrp_maximum_paths static int eigrp_maximum_paths_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long maximum_paths,\
	const char * maximum_paths_str __attribute__ ((unused)))
funcdecl_eigrp_maximum_paths;
DEFUN_CMD_FUNC_TEXT(eigrp_maximum_paths)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long maximum_paths = 0;
	const char *maximum_paths_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "maximum_paths")) {
			maximum_paths_str = argv[_i]->arg;
			char *_end;
			maximum_paths = strtol(argv[_i]->arg, &_end, 10);
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
	if (!maximum_paths_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "maximum_paths_str");
		return CMD_WARNING;
	}

	return eigrp_maximum_paths_magic(self, vty, argc, argv, maximum_paths, maximum_paths_str);
}

/* no_eigrp_maximum_paths => "no maximum-paths [(1-32)]" */
DEFUN_CMD_FUNC_DECL(no_eigrp_maximum_paths)
#define funcdecl_no_eigrp_maximum_paths static int no_eigrp_maximum_paths_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long maximum_paths,\
	const char * maximum_paths_str __attribute__ ((unused)))
funcdecl_no_eigrp_maximum_paths;
DEFUN_CMD_FUNC_TEXT(no_eigrp_maximum_paths)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long maximum_paths = 0;
	const char *maximum_paths_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "maximum_paths")) {
			maximum_paths_str = argv[_i]->arg;
			char *_end;
			maximum_paths = strtol(argv[_i]->arg, &_end, 10);
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

	return no_eigrp_maximum_paths_magic(self, vty, argc, argv, maximum_paths, maximum_paths_str);
}

/* eigrp_metric_weights => "metric weights (0-255)$k1 (0-255)$k2 (0-255)$k3 (0-255)$k4 (0-255)$k5 [(0-255)$k6]" */
DEFUN_CMD_FUNC_DECL(eigrp_metric_weights)
#define funcdecl_eigrp_metric_weights static int eigrp_metric_weights_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long k1,\
	const char * k1_str __attribute__ ((unused)),\
	long k2,\
	const char * k2_str __attribute__ ((unused)),\
	long k3,\
	const char * k3_str __attribute__ ((unused)),\
	long k4,\
	const char * k4_str __attribute__ ((unused)),\
	long k5,\
	const char * k5_str __attribute__ ((unused)),\
	long k6,\
	const char * k6_str __attribute__ ((unused)))
funcdecl_eigrp_metric_weights;
DEFUN_CMD_FUNC_TEXT(eigrp_metric_weights)
{
#if 6 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long k1 = 0;
	const char *k1_str = NULL;
	long k2 = 0;
	const char *k2_str = NULL;
	long k3 = 0;
	const char *k3_str = NULL;
	long k4 = 0;
	const char *k4_str = NULL;
	long k5 = 0;
	const char *k5_str = NULL;
	long k6 = 0;
	const char *k6_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "k1")) {
			k1_str = argv[_i]->arg;
			char *_end;
			k1 = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "k2")) {
			k2_str = argv[_i]->arg;
			char *_end;
			k2 = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "k3")) {
			k3_str = argv[_i]->arg;
			char *_end;
			k3 = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "k4")) {
			k4_str = argv[_i]->arg;
			char *_end;
			k4 = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "k5")) {
			k5_str = argv[_i]->arg;
			char *_end;
			k5 = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "k6")) {
			k6_str = argv[_i]->arg;
			char *_end;
			k6 = strtol(argv[_i]->arg, &_end, 10);
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
	if (!k1_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "k1_str");
		return CMD_WARNING;
	}
	if (!k2_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "k2_str");
		return CMD_WARNING;
	}
	if (!k3_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "k3_str");
		return CMD_WARNING;
	}
	if (!k4_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "k4_str");
		return CMD_WARNING;
	}
	if (!k5_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "k5_str");
		return CMD_WARNING;
	}

	return eigrp_metric_weights_magic(self, vty, argc, argv, k1, k1_str, k2, k2_str, k3, k3_str, k4, k4_str, k5, k5_str, k6, k6_str);
}

/* no_eigrp_metric_weights => "no metric weights [(0-255) (0-255) (0-255) (0-255) (0-255) (0-255)]" */
DEFUN_CMD_FUNC_DECL(no_eigrp_metric_weights)
#define funcdecl_no_eigrp_metric_weights static int no_eigrp_metric_weights_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long weights,\
	const char * weights_str __attribute__ ((unused)))
funcdecl_no_eigrp_metric_weights;
DEFUN_CMD_FUNC_TEXT(no_eigrp_metric_weights)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long weights = 0;
	const char *weights_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "weights")) {
			weights_str = argv[_i]->arg;
			char *_end;
			weights = strtol(argv[_i]->arg, &_end, 10);
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

	return no_eigrp_metric_weights_magic(self, vty, argc, argv, weights, weights_str);
}

/* eigrp_network => "[no] network A.B.C.D/M$prefix" */
DEFUN_CMD_FUNC_DECL(eigrp_network)
#define funcdecl_eigrp_network static int eigrp_network_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv4 * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_eigrp_network;
DEFUN_CMD_FUNC_TEXT(eigrp_network)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv4 prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &prefix);
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

	return eigrp_network_magic(self, vty, argc, argv, no, &prefix, prefix_str);
}

/* eigrp_neighbor => "[no] neighbor A.B.C.D$addr" */
DEFUN_CMD_FUNC_DECL(eigrp_neighbor)
#define funcdecl_eigrp_neighbor static int eigrp_neighbor_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in_addr addr,\
	const char * addr_str __attribute__ ((unused)))
funcdecl_eigrp_neighbor;
DEFUN_CMD_FUNC_TEXT(eigrp_neighbor)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in_addr addr = { INADDR_ANY };
	const char *addr_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "addr")) {
			addr_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &addr);
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
	if (!addr_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "addr_str");
		return CMD_WARNING;
	}

	return eigrp_neighbor_magic(self, vty, argc, argv, no, addr, addr_str);
}

/* eigrp_redistribute_source_metric => "[no] redistribute <kernel|connected|static|rip|ospf|isis|bgp|nhrp|table|vnc|babel|sharp|openfabric>$proto [metric (1-4294967295)$bw (0-4294967295)$delay (0-255)$rlbt (1-255)$load (1-65535)$mtu]" */
DEFUN_CMD_FUNC_DECL(eigrp_redistribute_source_metric)
#define funcdecl_eigrp_redistribute_source_metric static int eigrp_redistribute_source_metric_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * proto,\
	long bw,\
	const char * bw_str __attribute__ ((unused)),\
	long delay,\
	const char * delay_str __attribute__ ((unused)),\
	long rlbt,\
	const char * rlbt_str __attribute__ ((unused)),\
	long load,\
	const char * load_str __attribute__ ((unused)),\
	long mtu,\
	const char * mtu_str __attribute__ ((unused)))
funcdecl_eigrp_redistribute_source_metric;
DEFUN_CMD_FUNC_TEXT(eigrp_redistribute_source_metric)
{
#if 7 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *proto = NULL;
	long bw = 0;
	const char *bw_str = NULL;
	long delay = 0;
	const char *delay_str = NULL;
	long rlbt = 0;
	const char *rlbt_str = NULL;
	long load = 0;
	const char *load_str = NULL;
	long mtu = 0;
	const char *mtu_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "bw")) {
			bw_str = argv[_i]->arg;
			char *_end;
			bw = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "delay")) {
			delay_str = argv[_i]->arg;
			char *_end;
			delay = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "rlbt")) {
			rlbt_str = argv[_i]->arg;
			char *_end;
			rlbt = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "load")) {
			load_str = argv[_i]->arg;
			char *_end;
			load = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "mtu")) {
			mtu_str = argv[_i]->arg;
			char *_end;
			mtu = strtol(argv[_i]->arg, &_end, 10);
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
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}

	return eigrp_redistribute_source_metric_magic(self, vty, argc, argv, no, proto, bw, bw_str, delay, delay_str, rlbt, rlbt_str, load, load_str, mtu, mtu_str);
}

/* eigrp_if_delay => "delay (1-16777215)$delay" */
DEFUN_CMD_FUNC_DECL(eigrp_if_delay)
#define funcdecl_eigrp_if_delay static int eigrp_if_delay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long delay,\
	const char * delay_str __attribute__ ((unused)))
funcdecl_eigrp_if_delay;
DEFUN_CMD_FUNC_TEXT(eigrp_if_delay)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long delay = 0;
	const char *delay_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "delay")) {
			delay_str = argv[_i]->arg;
			char *_end;
			delay = strtol(argv[_i]->arg, &_end, 10);
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
	if (!delay_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "delay_str");
		return CMD_WARNING;
	}

	return eigrp_if_delay_magic(self, vty, argc, argv, delay, delay_str);
}

/* no_eigrp_if_delay => "no delay [(1-16777215)]" */
DEFUN_CMD_FUNC_DECL(no_eigrp_if_delay)
#define funcdecl_no_eigrp_if_delay static int no_eigrp_if_delay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long delay,\
	const char * delay_str __attribute__ ((unused)))
funcdecl_no_eigrp_if_delay;
DEFUN_CMD_FUNC_TEXT(no_eigrp_if_delay)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long delay = 0;
	const char *delay_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "delay")) {
			delay_str = argv[_i]->arg;
			char *_end;
			delay = strtol(argv[_i]->arg, &_end, 10);
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

	return no_eigrp_if_delay_magic(self, vty, argc, argv, delay, delay_str);
}

/* eigrp_if_bandwidth => "eigrp bandwidth (1-10000000)$bw" */
DEFUN_CMD_FUNC_DECL(eigrp_if_bandwidth)
#define funcdecl_eigrp_if_bandwidth static int eigrp_if_bandwidth_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long bw,\
	const char * bw_str __attribute__ ((unused)))
funcdecl_eigrp_if_bandwidth;
DEFUN_CMD_FUNC_TEXT(eigrp_if_bandwidth)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long bw = 0;
	const char *bw_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bw")) {
			bw_str = argv[_i]->arg;
			char *_end;
			bw = strtol(argv[_i]->arg, &_end, 10);
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
	if (!bw_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "bw_str");
		return CMD_WARNING;
	}

	return eigrp_if_bandwidth_magic(self, vty, argc, argv, bw, bw_str);
}

/* no_eigrp_if_bandwidth => "no eigrp bandwidth [(1-10000000)]" */
DEFUN_CMD_FUNC_DECL(no_eigrp_if_bandwidth)
#define funcdecl_no_eigrp_if_bandwidth static int no_eigrp_if_bandwidth_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long bandwidth,\
	const char * bandwidth_str __attribute__ ((unused)))
funcdecl_no_eigrp_if_bandwidth;
DEFUN_CMD_FUNC_TEXT(no_eigrp_if_bandwidth)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long bandwidth = 0;
	const char *bandwidth_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bandwidth")) {
			bandwidth_str = argv[_i]->arg;
			char *_end;
			bandwidth = strtol(argv[_i]->arg, &_end, 10);
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

	return no_eigrp_if_bandwidth_magic(self, vty, argc, argv, bandwidth, bandwidth_str);
}

/* eigrp_if_ip_hellointerval => "ip hello-interval eigrp (1-65535)$hello" */
DEFUN_CMD_FUNC_DECL(eigrp_if_ip_hellointerval)
#define funcdecl_eigrp_if_ip_hellointerval static int eigrp_if_ip_hellointerval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long hello,\
	const char * hello_str __attribute__ ((unused)))
funcdecl_eigrp_if_ip_hellointerval;
DEFUN_CMD_FUNC_TEXT(eigrp_if_ip_hellointerval)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long hello = 0;
	const char *hello_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hello")) {
			hello_str = argv[_i]->arg;
			char *_end;
			hello = strtol(argv[_i]->arg, &_end, 10);
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
	if (!hello_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "hello_str");
		return CMD_WARNING;
	}

	return eigrp_if_ip_hellointerval_magic(self, vty, argc, argv, hello, hello_str);
}

/* no_eigrp_if_ip_hellointerval => "no ip hello-interval eigrp [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(no_eigrp_if_ip_hellointerval)
#define funcdecl_no_eigrp_if_ip_hellointerval static int no_eigrp_if_ip_hellointerval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long eigrp,\
	const char * eigrp_str __attribute__ ((unused)))
funcdecl_no_eigrp_if_ip_hellointerval;
DEFUN_CMD_FUNC_TEXT(no_eigrp_if_ip_hellointerval)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long eigrp = 0;
	const char *eigrp_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "eigrp")) {
			eigrp_str = argv[_i]->arg;
			char *_end;
			eigrp = strtol(argv[_i]->arg, &_end, 10);
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

	return no_eigrp_if_ip_hellointerval_magic(self, vty, argc, argv, eigrp, eigrp_str);
}

/* eigrp_if_ip_holdinterval => "ip hold-time eigrp (1-65535)$hold" */
DEFUN_CMD_FUNC_DECL(eigrp_if_ip_holdinterval)
#define funcdecl_eigrp_if_ip_holdinterval static int eigrp_if_ip_holdinterval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long hold,\
	const char * hold_str __attribute__ ((unused)))
funcdecl_eigrp_if_ip_holdinterval;
DEFUN_CMD_FUNC_TEXT(eigrp_if_ip_holdinterval)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long hold = 0;
	const char *hold_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hold")) {
			hold_str = argv[_i]->arg;
			char *_end;
			hold = strtol(argv[_i]->arg, &_end, 10);
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
	if (!hold_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "hold_str");
		return CMD_WARNING;
	}

	return eigrp_if_ip_holdinterval_magic(self, vty, argc, argv, hold, hold_str);
}

/* no_eigrp_if_ip_holdinterval => "no ip hold-time eigrp [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(no_eigrp_if_ip_holdinterval)
#define funcdecl_no_eigrp_if_ip_holdinterval static int no_eigrp_if_ip_holdinterval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long eigrp,\
	const char * eigrp_str __attribute__ ((unused)))
funcdecl_no_eigrp_if_ip_holdinterval;
DEFUN_CMD_FUNC_TEXT(no_eigrp_if_ip_holdinterval)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long eigrp = 0;
	const char *eigrp_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "eigrp")) {
			eigrp_str = argv[_i]->arg;
			char *_end;
			eigrp = strtol(argv[_i]->arg, &_end, 10);
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

	return no_eigrp_if_ip_holdinterval_magic(self, vty, argc, argv, eigrp, eigrp_str);
}

/* eigrp_ip_summary_address => "ip summary-address eigrp (1-65535)$as A.B.C.D/M$prefix" */
DEFUN_CMD_FUNC_DECL(eigrp_ip_summary_address)
#define funcdecl_eigrp_ip_summary_address static int eigrp_ip_summary_address_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long as,\
	const char * as_str __attribute__ ((unused)),\
	const struct prefix_ipv4 * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_eigrp_ip_summary_address;
DEFUN_CMD_FUNC_TEXT(eigrp_ip_summary_address)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long as = 0;
	const char *as_str = NULL;
	struct prefix_ipv4 prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "as")) {
			as_str = argv[_i]->arg;
			char *_end;
			as = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &prefix);
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
	if (!as_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "as_str");
		return CMD_WARNING;
	}
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return eigrp_ip_summary_address_magic(self, vty, argc, argv, as, as_str, &prefix, prefix_str);
}

/* no_eigrp_ip_summary_address => "no ip summary-address eigrp (1-65535)$as A.B.C.D/M$prefix" */
DEFUN_CMD_FUNC_DECL(no_eigrp_ip_summary_address)
#define funcdecl_no_eigrp_ip_summary_address static int no_eigrp_ip_summary_address_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long as,\
	const char * as_str __attribute__ ((unused)),\
	const struct prefix_ipv4 * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_no_eigrp_ip_summary_address;
DEFUN_CMD_FUNC_TEXT(no_eigrp_ip_summary_address)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long as = 0;
	const char *as_str = NULL;
	struct prefix_ipv4 prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "as")) {
			as_str = argv[_i]->arg;
			char *_end;
			as = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &prefix);
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
	if (!as_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "as_str");
		return CMD_WARNING;
	}
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return no_eigrp_ip_summary_address_magic(self, vty, argc, argv, as, as_str, &prefix, prefix_str);
}

/* eigrp_authentication_mode => "ip authentication mode eigrp (1-65535)$as <md5|hmac-sha-256>$crypt" */
DEFUN_CMD_FUNC_DECL(eigrp_authentication_mode)
#define funcdecl_eigrp_authentication_mode static int eigrp_authentication_mode_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long as,\
	const char * as_str __attribute__ ((unused)),\
	const char * crypt)
funcdecl_eigrp_authentication_mode;
DEFUN_CMD_FUNC_TEXT(eigrp_authentication_mode)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long as = 0;
	const char *as_str = NULL;
	const char *crypt = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "as")) {
			as_str = argv[_i]->arg;
			char *_end;
			as = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "crypt")) {
			crypt = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!as_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "as_str");
		return CMD_WARNING;
	}
	if (!crypt) {
		vty_out(vty, "Internal CLI error [%s]\n", "crypt");
		return CMD_WARNING;
	}

	return eigrp_authentication_mode_magic(self, vty, argc, argv, as, as_str, crypt);
}

/* no_eigrp_authentication_mode => "no ip authentication mode eigrp (1-65535)$as [<md5|hmac-sha-256>]" */
DEFUN_CMD_FUNC_DECL(no_eigrp_authentication_mode)
#define funcdecl_no_eigrp_authentication_mode static int no_eigrp_authentication_mode_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long as,\
	const char * as_str __attribute__ ((unused)))
funcdecl_no_eigrp_authentication_mode;
DEFUN_CMD_FUNC_TEXT(no_eigrp_authentication_mode)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long as = 0;
	const char *as_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "as")) {
			as_str = argv[_i]->arg;
			char *_end;
			as = strtol(argv[_i]->arg, &_end, 10);
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
	if (!as_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "as_str");
		return CMD_WARNING;
	}

	return no_eigrp_authentication_mode_magic(self, vty, argc, argv, as, as_str);
}

/* eigrp_authentication_keychain => "ip authentication key-chain eigrp (1-65535)$as WORD$name" */
DEFUN_CMD_FUNC_DECL(eigrp_authentication_keychain)
#define funcdecl_eigrp_authentication_keychain static int eigrp_authentication_keychain_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long as,\
	const char * as_str __attribute__ ((unused)),\
	const char * name)
funcdecl_eigrp_authentication_keychain;
DEFUN_CMD_FUNC_TEXT(eigrp_authentication_keychain)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long as = 0;
	const char *as_str = NULL;
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "as")) {
			as_str = argv[_i]->arg;
			char *_end;
			as = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!as_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "as_str");
		return CMD_WARNING;
	}
	if (!name) {
		vty_out(vty, "Internal CLI error [%s]\n", "name");
		return CMD_WARNING;
	}

	return eigrp_authentication_keychain_magic(self, vty, argc, argv, as, as_str, name);
}

/* no_eigrp_authentication_keychain => "no ip authentication key-chain eigrp (1-65535)$as [WORD]" */
DEFUN_CMD_FUNC_DECL(no_eigrp_authentication_keychain)
#define funcdecl_no_eigrp_authentication_keychain static int no_eigrp_authentication_keychain_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long as,\
	const char * as_str __attribute__ ((unused)))
funcdecl_no_eigrp_authentication_keychain;
DEFUN_CMD_FUNC_TEXT(no_eigrp_authentication_keychain)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long as = 0;
	const char *as_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "as")) {
			as_str = argv[_i]->arg;
			char *_end;
			as = strtol(argv[_i]->arg, &_end, 10);
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
	if (!as_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "as_str");
		return CMD_WARNING;
	}

	return no_eigrp_authentication_keychain_magic(self, vty, argc, argv, as, as_str);
}

