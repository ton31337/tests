/* bgp_session_dscp => "bgp session-dscp (0-63)$dscp" */
DEFUN_CMD_FUNC_DECL(bgp_session_dscp)
#define funcdecl_bgp_session_dscp static int bgp_session_dscp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long dscp,\
	const char * dscp_str __attribute__ ((unused)))
funcdecl_bgp_session_dscp;
DEFUN_CMD_FUNC_TEXT(bgp_session_dscp)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long dscp = 0;
	const char *dscp_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "dscp")) {
			dscp_str = argv[_i]->arg;
			char *_end;
			dscp = strtol(argv[_i]->arg, &_end, 10);
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
	if (!dscp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "dscp_str");
		return CMD_WARNING;
	}

	return bgp_session_dscp_magic(self, vty, argc, argv, dscp, dscp_str);
}

/* no_bgp_session_dscp => "no bgp session-dscp [(0-63)]" */
DEFUN_CMD_FUNC_DECL(no_bgp_session_dscp)
#define funcdecl_no_bgp_session_dscp static int no_bgp_session_dscp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long session_dscp,\
	const char * session_dscp_str __attribute__ ((unused)))
funcdecl_no_bgp_session_dscp;
DEFUN_CMD_FUNC_TEXT(no_bgp_session_dscp)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long session_dscp = 0;
	const char *session_dscp_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "session_dscp")) {
			session_dscp_str = argv[_i]->arg;
			char *_end;
			session_dscp = strtol(argv[_i]->arg, &_end, 10);
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

	return no_bgp_session_dscp_magic(self, vty, argc, argv, session_dscp, session_dscp_str);
}

/* bgp_router_id => "bgp router-id A.B.C.D" */
DEFUN_CMD_FUNC_DECL(bgp_router_id)
#define funcdecl_bgp_router_id static int bgp_router_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr router_id,\
	const char * router_id_str __attribute__ ((unused)))
funcdecl_bgp_router_id;
DEFUN_CMD_FUNC_TEXT(bgp_router_id)
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
	if (!router_id_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "router_id_str");
		return CMD_WARNING;
	}

	return bgp_router_id_magic(self, vty, argc, argv, router_id, router_id_str);
}

/* no_bgp_router_id => "no bgp router-id [A.B.C.D]" */
DEFUN_CMD_FUNC_DECL(no_bgp_router_id)
#define funcdecl_no_bgp_router_id static int no_bgp_router_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr router_id,\
	const char * router_id_str __attribute__ ((unused)))
funcdecl_no_bgp_router_id;
DEFUN_CMD_FUNC_TEXT(no_bgp_router_id)
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

	return no_bgp_router_id_magic(self, vty, argc, argv, router_id, router_id_str);
}

/* bgp_community_alias => "[no$no] bgp community alias WORD$community ALIAS_NAME$alias_name" */
DEFUN_CMD_FUNC_DECL(bgp_community_alias)
#define funcdecl_bgp_community_alias static int bgp_community_alias_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * community,\
	const char * alias_name)
funcdecl_bgp_community_alias;
DEFUN_CMD_FUNC_TEXT(bgp_community_alias)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *community = NULL;
	const char *alias_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "community")) {
			community = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "alias_name")) {
			alias_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!community) {
		vty_out(vty, "Internal CLI error [%s]\n", "community");
		return CMD_WARNING;
	}
	if (!alias_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "alias_name");
		return CMD_WARNING;
	}

	return bgp_community_alias_magic(self, vty, argc, argv, no, community, alias_name);
}

/* bgp_global_suppress_fib_pending => "[no] bgp suppress-fib-pending" */
DEFUN_CMD_FUNC_DECL(bgp_global_suppress_fib_pending)
#define funcdecl_bgp_global_suppress_fib_pending static int bgp_global_suppress_fib_pending_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_global_suppress_fib_pending;
DEFUN_CMD_FUNC_TEXT(bgp_global_suppress_fib_pending)
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

	return bgp_global_suppress_fib_pending_magic(self, vty, argc, argv, no);
}

/* bgp_suppress_fib_pending => "[no] bgp suppress-fib-pending" */
DEFUN_CMD_FUNC_DECL(bgp_suppress_fib_pending)
#define funcdecl_bgp_suppress_fib_pending static int bgp_suppress_fib_pending_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_suppress_fib_pending;
DEFUN_CMD_FUNC_TEXT(bgp_suppress_fib_pending)
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

	return bgp_suppress_fib_pending_magic(self, vty, argc, argv, no);
}

/* bgp_norib => "bgp no-rib" */
DEFUN_CMD_FUNC_DECL(bgp_norib)
#define funcdecl_bgp_norib static int bgp_norib_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_bgp_norib;
DEFUN_CMD_FUNC_TEXT(bgp_norib)
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

	return bgp_norib_magic(self, vty, argc, argv);
}

/* no_bgp_norib => "no bgp no-rib" */
DEFUN_CMD_FUNC_DECL(no_bgp_norib)
#define funcdecl_no_bgp_norib static int no_bgp_norib_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_bgp_norib;
DEFUN_CMD_FUNC_TEXT(no_bgp_norib)
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

	return no_bgp_norib_magic(self, vty, argc, argv);
}

/* no_bgp_send_extra_data => "[no] bgp send-extra-data zebra" */
DEFUN_CMD_FUNC_DECL(no_bgp_send_extra_data)
#define funcdecl_no_bgp_send_extra_data static int no_bgp_send_extra_data_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_no_bgp_send_extra_data;
DEFUN_CMD_FUNC_TEXT(no_bgp_send_extra_data)
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

	return no_bgp_send_extra_data_magic(self, vty, argc, argv, no);
}

/* bgp_global_update_delay => "bgp update-delay (0-3600)$delay [(1-3600)$wait]" */
DEFUN_CMD_FUNC_DECL(bgp_global_update_delay)
#define funcdecl_bgp_global_update_delay static int bgp_global_update_delay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long delay,\
	const char * delay_str __attribute__ ((unused)),\
	long wait,\
	const char * wait_str __attribute__ ((unused)))
funcdecl_bgp_global_update_delay;
DEFUN_CMD_FUNC_TEXT(bgp_global_update_delay)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long delay = 0;
	const char *delay_str = NULL;
	long wait = 0;
	const char *wait_str = NULL;

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
		if (!strcmp(argv[_i]->varname, "wait")) {
			wait_str = argv[_i]->arg;
			char *_end;
			wait = strtol(argv[_i]->arg, &_end, 10);
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

	return bgp_global_update_delay_magic(self, vty, argc, argv, delay, delay_str, wait, wait_str);
}

/* no_bgp_global_update_delay => "no bgp update-delay [(0-3600) [(1-3600)]]" */
DEFUN_CMD_FUNC_DECL(no_bgp_global_update_delay)
#define funcdecl_no_bgp_global_update_delay static int no_bgp_global_update_delay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long update_delay,\
	const char * update_delay_str __attribute__ ((unused)))
funcdecl_no_bgp_global_update_delay;
DEFUN_CMD_FUNC_TEXT(no_bgp_global_update_delay)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long update_delay = 0;
	const char *update_delay_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "update_delay")) {
			update_delay_str = argv[_i]->arg;
			char *_end;
			update_delay = strtol(argv[_i]->arg, &_end, 10);
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

	return no_bgp_global_update_delay_magic(self, vty, argc, argv, update_delay, update_delay_str);
}

/* bgp_update_delay => "update-delay (0-3600)$delay [(1-3600)$wait]" */
DEFUN_CMD_FUNC_DECL(bgp_update_delay)
#define funcdecl_bgp_update_delay static int bgp_update_delay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long delay,\
	const char * delay_str __attribute__ ((unused)),\
	long wait,\
	const char * wait_str __attribute__ ((unused)))
funcdecl_bgp_update_delay;
DEFUN_CMD_FUNC_TEXT(bgp_update_delay)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long delay = 0;
	const char *delay_str = NULL;
	long wait = 0;
	const char *wait_str = NULL;

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
		if (!strcmp(argv[_i]->varname, "wait")) {
			wait_str = argv[_i]->arg;
			char *_end;
			wait = strtol(argv[_i]->arg, &_end, 10);
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

	return bgp_update_delay_magic(self, vty, argc, argv, delay, delay_str, wait, wait_str);
}

/* no_bgp_update_delay => "no update-delay [(0-3600) [(1-3600)]]" */
DEFUN_CMD_FUNC_DECL(no_bgp_update_delay)
#define funcdecl_no_bgp_update_delay static int no_bgp_update_delay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long update_delay,\
	const char * update_delay_str __attribute__ ((unused)))
funcdecl_no_bgp_update_delay;
DEFUN_CMD_FUNC_TEXT(no_bgp_update_delay)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long update_delay = 0;
	const char *update_delay_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "update_delay")) {
			update_delay_str = argv[_i]->arg;
			char *_end;
			update_delay = strtol(argv[_i]->arg, &_end, 10);
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

	return no_bgp_update_delay_magic(self, vty, argc, argv, update_delay, update_delay_str);
}

/* bgp_wpkt_quanta => "[no] write-quanta (1-64)$quanta" */
DEFUN_CMD_FUNC_DECL(bgp_wpkt_quanta)
#define funcdecl_bgp_wpkt_quanta static int bgp_wpkt_quanta_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long quanta,\
	const char * quanta_str __attribute__ ((unused)))
funcdecl_bgp_wpkt_quanta;
DEFUN_CMD_FUNC_TEXT(bgp_wpkt_quanta)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long quanta = 0;
	const char *quanta_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "quanta")) {
			quanta_str = argv[_i]->arg;
			char *_end;
			quanta = strtol(argv[_i]->arg, &_end, 10);
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
	if (!quanta_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "quanta_str");
		return CMD_WARNING;
	}

	return bgp_wpkt_quanta_magic(self, vty, argc, argv, no, quanta, quanta_str);
}

/* bgp_rpkt_quanta => "[no] read-quanta (1-10)$quanta" */
DEFUN_CMD_FUNC_DECL(bgp_rpkt_quanta)
#define funcdecl_bgp_rpkt_quanta static int bgp_rpkt_quanta_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long quanta,\
	const char * quanta_str __attribute__ ((unused)))
funcdecl_bgp_rpkt_quanta;
DEFUN_CMD_FUNC_TEXT(bgp_rpkt_quanta)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long quanta = 0;
	const char *quanta_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "quanta")) {
			quanta_str = argv[_i]->arg;
			char *_end;
			quanta = strtol(argv[_i]->arg, &_end, 10);
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
	if (!quanta_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "quanta_str");
		return CMD_WARNING;
	}

	return bgp_rpkt_quanta_magic(self, vty, argc, argv, no, quanta, quanta_str);
}

/* bgp_tcp_keepalive => "bgp tcp-keepalive (1-65535)$idle (1-65535)$intvl (1-30)$probes" */
DEFUN_CMD_FUNC_DECL(bgp_tcp_keepalive)
#define funcdecl_bgp_tcp_keepalive static int bgp_tcp_keepalive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long idle,\
	const char * idle_str __attribute__ ((unused)),\
	long intvl,\
	const char * intvl_str __attribute__ ((unused)),\
	long probes,\
	const char * probes_str __attribute__ ((unused)))
funcdecl_bgp_tcp_keepalive;
DEFUN_CMD_FUNC_TEXT(bgp_tcp_keepalive)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long idle = 0;
	const char *idle_str = NULL;
	long intvl = 0;
	const char *intvl_str = NULL;
	long probes = 0;
	const char *probes_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "idle")) {
			idle_str = argv[_i]->arg;
			char *_end;
			idle = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "intvl")) {
			intvl_str = argv[_i]->arg;
			char *_end;
			intvl = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "probes")) {
			probes_str = argv[_i]->arg;
			char *_end;
			probes = strtol(argv[_i]->arg, &_end, 10);
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
	if (!idle_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "idle_str");
		return CMD_WARNING;
	}
	if (!intvl_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "intvl_str");
		return CMD_WARNING;
	}
	if (!probes_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "probes_str");
		return CMD_WARNING;
	}

	return bgp_tcp_keepalive_magic(self, vty, argc, argv, idle, idle_str, intvl, intvl_str, probes, probes_str);
}

/* no_bgp_tcp_keepalive => "no bgp tcp-keepalive [(1-65535) (1-65535) (1-30)]" */
DEFUN_CMD_FUNC_DECL(no_bgp_tcp_keepalive)
#define funcdecl_no_bgp_tcp_keepalive static int no_bgp_tcp_keepalive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long tcp_keepalive,\
	const char * tcp_keepalive_str __attribute__ ((unused)))
funcdecl_no_bgp_tcp_keepalive;
DEFUN_CMD_FUNC_TEXT(no_bgp_tcp_keepalive)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long tcp_keepalive = 0;
	const char *tcp_keepalive_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "tcp_keepalive")) {
			tcp_keepalive_str = argv[_i]->arg;
			char *_end;
			tcp_keepalive = strtol(argv[_i]->arg, &_end, 10);
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

	return no_bgp_tcp_keepalive_magic(self, vty, argc, argv, tcp_keepalive, tcp_keepalive_str);
}

/* bgp_graceful_restart_notification => "[no$no] bgp graceful-restart notification" */
DEFUN_CMD_FUNC_DECL(bgp_graceful_restart_notification)
#define funcdecl_bgp_graceful_restart_notification static int bgp_graceful_restart_notification_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_graceful_restart_notification;
DEFUN_CMD_FUNC_TEXT(bgp_graceful_restart_notification)
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

	return bgp_graceful_restart_notification_magic(self, vty, argc, argv, no);
}

/* bgp_administrative_reset => "[no$no] bgp hard-administrative-reset" */
DEFUN_CMD_FUNC_DECL(bgp_administrative_reset)
#define funcdecl_bgp_administrative_reset static int bgp_administrative_reset_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_administrative_reset;
DEFUN_CMD_FUNC_TEXT(bgp_administrative_reset)
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

	return bgp_administrative_reset_magic(self, vty, argc, argv, no);
}

/* bgp_bestpath_bw => "bgp bestpath bandwidth <ignore|skip-missing|default-weight-for-missing>$bw_cfg" */
DEFUN_CMD_FUNC_DECL(bgp_bestpath_bw)
#define funcdecl_bgp_bestpath_bw static int bgp_bestpath_bw_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * bw_cfg)
funcdecl_bgp_bestpath_bw;
DEFUN_CMD_FUNC_TEXT(bgp_bestpath_bw)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *bw_cfg = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bw_cfg")) {
			bw_cfg = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!bw_cfg) {
		vty_out(vty, "Internal CLI error [%s]\n", "bw_cfg");
		return CMD_WARNING;
	}

	return bgp_bestpath_bw_magic(self, vty, argc, argv, bw_cfg);
}

/* no_bgp_bestpath_bw => "no bgp bestpath bandwidth [<ignore|skip-missing|default-weight-for-missing>$bw_cfg]" */
DEFUN_CMD_FUNC_DECL(no_bgp_bestpath_bw)
#define funcdecl_no_bgp_bestpath_bw static int no_bgp_bestpath_bw_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * bw_cfg)
funcdecl_no_bgp_bestpath_bw;
DEFUN_CMD_FUNC_TEXT(no_bgp_bestpath_bw)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *bw_cfg = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bw_cfg")) {
			bw_cfg = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_bgp_bestpath_bw_magic(self, vty, argc, argv, bw_cfg);
}

/* bgp_default_afi_safi => "[no] bgp default <ipv4-unicast|ipv4-multicast|ipv4-vpn|ipv4-labeled-unicast|ipv4-flowspec|ipv6-unicast|ipv6-multicast|ipv6-vpn|ipv6-labeled-unicast|ipv6-flowspec|l2vpn-evpn>$afi_safi" */
DEFUN_CMD_FUNC_DECL(bgp_default_afi_safi)
#define funcdecl_bgp_default_afi_safi static int bgp_default_afi_safi_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * afi_safi)
funcdecl_bgp_default_afi_safi;
DEFUN_CMD_FUNC_TEXT(bgp_default_afi_safi)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *afi_safi = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "afi_safi")) {
			afi_safi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!afi_safi) {
		vty_out(vty, "Internal CLI error [%s]\n", "afi_safi");
		return CMD_WARNING;
	}

	return bgp_default_afi_safi_magic(self, vty, argc, argv, no, afi_safi);
}

/* bgp_shutdown_msg => "bgp shutdown message MSG..." */
DEFUN_CMD_FUNC_DECL(bgp_shutdown_msg)
#define funcdecl_bgp_shutdown_msg static int bgp_shutdown_msg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * msg)
funcdecl_bgp_shutdown_msg;
DEFUN_CMD_FUNC_TEXT(bgp_shutdown_msg)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *msg = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "msg")) {
			msg = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!msg) {
		vty_out(vty, "Internal CLI error [%s]\n", "msg");
		return CMD_WARNING;
	}

	return bgp_shutdown_msg_magic(self, vty, argc, argv, msg);
}

/* bgp_shutdown => "bgp shutdown" */
DEFUN_CMD_FUNC_DECL(bgp_shutdown)
#define funcdecl_bgp_shutdown static int bgp_shutdown_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_bgp_shutdown;
DEFUN_CMD_FUNC_TEXT(bgp_shutdown)
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

	return bgp_shutdown_magic(self, vty, argc, argv);
}

/* no_bgp_shutdown => "no bgp shutdown" */
DEFUN_CMD_FUNC_DECL(no_bgp_shutdown)
#define funcdecl_no_bgp_shutdown static int no_bgp_shutdown_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_bgp_shutdown;
DEFUN_CMD_FUNC_TEXT(no_bgp_shutdown)
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

	return no_bgp_shutdown_magic(self, vty, argc, argv);
}

/* bgp_allow_martian => "[no]$no bgp allow-martian-nexthop" */
DEFUN_CMD_FUNC_DECL(bgp_allow_martian)
#define funcdecl_bgp_allow_martian static int bgp_allow_martian_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_allow_martian;
DEFUN_CMD_FUNC_TEXT(bgp_allow_martian)
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

	return bgp_allow_martian_magic(self, vty, argc, argv, no);
}

/* optimal_route_reflection => "[no$no] optimal-route-reflection WORD$orr_group [<A.B.C.D|X:X::X:X>$primary [<A.B.C.D|X:X::X:X>$secondary [<A.B.C.D|X:X::X:X>$tertiary]]]" */
DEFUN_CMD_FUNC_DECL(optimal_route_reflection)
#define funcdecl_optimal_route_reflection static int optimal_route_reflection_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * orr_group,\
	const union sockunion * primary,\
	const char * primary_str __attribute__ ((unused)),\
	const union sockunion * secondary,\
	const char * secondary_str __attribute__ ((unused)),\
	const union sockunion * tertiary,\
	const char * tertiary_str __attribute__ ((unused)))
funcdecl_optimal_route_reflection;
DEFUN_CMD_FUNC_TEXT(optimal_route_reflection)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *orr_group = NULL;
	union sockunion s__primary = { .sa.sa_family = AF_UNSPEC }, *primary = NULL;
	const char *primary_str = NULL;
	union sockunion s__secondary = { .sa.sa_family = AF_UNSPEC }, *secondary = NULL;
	const char *secondary_str = NULL;
	union sockunion s__tertiary = { .sa.sa_family = AF_UNSPEC }, *tertiary = NULL;
	const char *tertiary_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "orr_group")) {
			orr_group = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "primary")) {
			primary_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__primary.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__primary.sin6.sin6_addr);
				primary = &s__primary;
			} else {
				s__primary.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__primary.sin.sin_addr);
				primary = &s__primary;
			}
		}
		if (!strcmp(argv[_i]->varname, "secondary")) {
			secondary_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__secondary.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__secondary.sin6.sin6_addr);
				secondary = &s__secondary;
			} else {
				s__secondary.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__secondary.sin.sin_addr);
				secondary = &s__secondary;
			}
		}
		if (!strcmp(argv[_i]->varname, "tertiary")) {
			tertiary_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__tertiary.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__tertiary.sin6.sin6_addr);
				tertiary = &s__tertiary;
			} else {
				s__tertiary.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__tertiary.sin.sin_addr);
				tertiary = &s__tertiary;
			}
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
	if (!orr_group) {
		vty_out(vty, "Internal CLI error [%s]\n", "orr_group");
		return CMD_WARNING;
	}

	return optimal_route_reflection_magic(self, vty, argc, argv, no, orr_group, primary, primary_str, secondary, secondary_str, tertiary, tertiary_str);
}

/* neighbor_optimal_route_reflection => "[no$no] neighbor <A.B.C.D|X:X::X:X|WORD>$neighbor optimal-route-reflection WORD$orr_group" */
DEFUN_CMD_FUNC_DECL(neighbor_optimal_route_reflection)
#define funcdecl_neighbor_optimal_route_reflection static int neighbor_optimal_route_reflection_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * neighbor,\
	const char * orr_group)
funcdecl_neighbor_optimal_route_reflection;
DEFUN_CMD_FUNC_TEXT(neighbor_optimal_route_reflection)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *neighbor = NULL;
	const char *orr_group = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "orr_group")) {
			orr_group = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}
	if (!orr_group) {
		vty_out(vty, "Internal CLI error [%s]\n", "orr_group");
		return CMD_WARNING;
	}

	return neighbor_optimal_route_reflection_magic(self, vty, argc, argv, no, neighbor, orr_group);
}

/* neighbor_role => "neighbor <A.B.C.D|X:X::X:X|WORD> local-role <provider|rs-server|rs-client|customer|peer>" */
DEFUN_CMD_FUNC_DECL(neighbor_role)
#define funcdecl_neighbor_role static int neighbor_role_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * neighbor)
funcdecl_neighbor_role;
DEFUN_CMD_FUNC_TEXT(neighbor_role)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *neighbor = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}

	return neighbor_role_magic(self, vty, argc, argv, neighbor);
}

/* neighbor_role_strict => "neighbor <A.B.C.D|X:X::X:X|WORD> local-role <provider|rs-server|rs-client|customer|peer> strict-mode" */
DEFUN_CMD_FUNC_DECL(neighbor_role_strict)
#define funcdecl_neighbor_role_strict static int neighbor_role_strict_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * neighbor)
funcdecl_neighbor_role_strict;
DEFUN_CMD_FUNC_TEXT(neighbor_role_strict)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *neighbor = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}

	return neighbor_role_strict_magic(self, vty, argc, argv, neighbor);
}

/* no_neighbor_role => "no neighbor <A.B.C.D|X:X::X:X|WORD> local-role <provider|rs-server|rs-client|customer|peer> [strict-mode]" */
DEFUN_CMD_FUNC_DECL(no_neighbor_role)
#define funcdecl_no_neighbor_role static int no_neighbor_role_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * neighbor)
funcdecl_no_neighbor_role;
DEFUN_CMD_FUNC_TEXT(no_neighbor_role)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *neighbor = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}

	return no_neighbor_role_magic(self, vty, argc, argv, neighbor);
}

/* neighbor_timers_delayopen => "neighbor <A.B.C.D|X:X::X:X|WORD>$neighbor timers delayopen (1-240)$interval" */
DEFUN_CMD_FUNC_DECL(neighbor_timers_delayopen)
#define funcdecl_neighbor_timers_delayopen static int neighbor_timers_delayopen_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * neighbor,\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_neighbor_timers_delayopen;
DEFUN_CMD_FUNC_TEXT(neighbor_timers_delayopen)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *neighbor = NULL;
	long interval = 0;
	const char *interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}
	if (!interval_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "interval_str");
		return CMD_WARNING;
	}

	return neighbor_timers_delayopen_magic(self, vty, argc, argv, neighbor, interval, interval_str);
}

/* no_neighbor_timers_delayopen => "no neighbor <A.B.C.D|X:X::X:X|WORD>$neighbor timers delayopen [(0-65535)]" */
DEFUN_CMD_FUNC_DECL(no_neighbor_timers_delayopen)
#define funcdecl_no_neighbor_timers_delayopen static int no_neighbor_timers_delayopen_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * neighbor,\
	long delayopen,\
	const char * delayopen_str __attribute__ ((unused)))
funcdecl_no_neighbor_timers_delayopen;
DEFUN_CMD_FUNC_TEXT(no_neighbor_timers_delayopen)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *neighbor = NULL;
	long delayopen = 0;
	const char *delayopen_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "delayopen")) {
			delayopen_str = argv[_i]->arg;
			char *_end;
			delayopen = strtol(argv[_i]->arg, &_end, 10);
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}

	return no_neighbor_timers_delayopen_magic(self, vty, argc, argv, neighbor, delayopen, delayopen_str);
}

/* bgp_condadv_period => "[no$no] bgp conditional-advertisement timer (5-240)$period" */
DEFUN_CMD_FUNC_DECL(bgp_condadv_period)
#define funcdecl_bgp_condadv_period static int bgp_condadv_period_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long period,\
	const char * period_str __attribute__ ((unused)))
funcdecl_bgp_condadv_period;
DEFUN_CMD_FUNC_TEXT(bgp_condadv_period)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long period = 0;
	const char *period_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "period")) {
			period_str = argv[_i]->arg;
			char *_end;
			period = strtol(argv[_i]->arg, &_end, 10);
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
	if (!period_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "period_str");
		return CMD_WARNING;
	}

	return bgp_condadv_period_magic(self, vty, argc, argv, no, period, period_str);
}

/* neighbor_advertise_map => "[no$no] neighbor <A.B.C.D|X:X::X:X|WORD>$neighbor advertise-map RMAP_NAME$advertise_str <exist-map|non-exist-map>$exist RMAP_NAME$condition_str" */
DEFUN_CMD_FUNC_DECL(neighbor_advertise_map)
#define funcdecl_neighbor_advertise_map static int neighbor_advertise_map_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * neighbor,\
	const char * advertise_str,\
	const char * exist,\
	const char * condition_str)
funcdecl_neighbor_advertise_map;
DEFUN_CMD_FUNC_TEXT(neighbor_advertise_map)
{
#if 5 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *neighbor = NULL;
	const char *advertise_str = NULL;
	const char *exist = NULL;
	const char *condition_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "advertise_str")) {
			advertise_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "exist")) {
			exist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "condition_str")) {
			condition_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}
	if (!advertise_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "advertise_str");
		return CMD_WARNING;
	}
	if (!exist) {
		vty_out(vty, "Internal CLI error [%s]\n", "exist");
		return CMD_WARNING;
	}
	if (!condition_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "condition_str");
		return CMD_WARNING;
	}

	return neighbor_advertise_map_magic(self, vty, argc, argv, no, neighbor, advertise_str, exist, condition_str);
}

/* neighbor_accept_own => "[no$no] neighbor <A.B.C.D|X:X::X:X|WORD>$neighbor accept-own" */
DEFUN_CMD_FUNC_DECL(neighbor_accept_own)
#define funcdecl_neighbor_accept_own static int neighbor_accept_own_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * neighbor)
funcdecl_neighbor_accept_own;
DEFUN_CMD_FUNC_TEXT(neighbor_accept_own)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *neighbor = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}

	return neighbor_accept_own_magic(self, vty, argc, argv, no, neighbor);
}

/* neighbor_soo => "neighbor <A.B.C.D|X:X::X:X|WORD>$neighbor soo ASN:NN_OR_IP-ADDRESS:NN$soo" */
DEFUN_CMD_FUNC_DECL(neighbor_soo)
#define funcdecl_neighbor_soo static int neighbor_soo_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * neighbor,\
	const char * soo)
funcdecl_neighbor_soo;
DEFUN_CMD_FUNC_TEXT(neighbor_soo)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *neighbor = NULL;
	const char *soo = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "soo")) {
			soo = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}
	if (!soo) {
		vty_out(vty, "Internal CLI error [%s]\n", "soo");
		return CMD_WARNING;
	}

	return neighbor_soo_magic(self, vty, argc, argv, neighbor, soo);
}

/* no_neighbor_soo => "no neighbor <A.B.C.D|X:X::X:X|WORD>$neighbor soo [ASN:NN_OR_IP-ADDRESS:NN$soo]" */
DEFUN_CMD_FUNC_DECL(no_neighbor_soo)
#define funcdecl_no_neighbor_soo static int no_neighbor_soo_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * neighbor,\
	const char * soo)
funcdecl_no_neighbor_soo;
DEFUN_CMD_FUNC_TEXT(no_neighbor_soo)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *neighbor = NULL;
	const char *soo = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "soo")) {
			soo = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}

	return no_neighbor_soo_magic(self, vty, argc, argv, neighbor, soo);
}

/* neighbor_aspath_loop_detection => "neighbor <A.B.C.D|X:X::X:X|WORD>$neighbor sender-as-path-loop-detection" */
DEFUN_CMD_FUNC_DECL(neighbor_aspath_loop_detection)
#define funcdecl_neighbor_aspath_loop_detection static int neighbor_aspath_loop_detection_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * neighbor)
funcdecl_neighbor_aspath_loop_detection;
DEFUN_CMD_FUNC_TEXT(neighbor_aspath_loop_detection)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *neighbor = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}

	return neighbor_aspath_loop_detection_magic(self, vty, argc, argv, neighbor);
}

/* no_neighbor_aspath_loop_detection => "no neighbor <A.B.C.D|X:X::X:X|WORD>$neighbor sender-as-path-loop-detection" */
DEFUN_CMD_FUNC_DECL(no_neighbor_aspath_loop_detection)
#define funcdecl_no_neighbor_aspath_loop_detection static int no_neighbor_aspath_loop_detection_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * neighbor)
funcdecl_no_neighbor_aspath_loop_detection;
DEFUN_CMD_FUNC_TEXT(no_neighbor_aspath_loop_detection)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *neighbor = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!neighbor) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor");
		return CMD_WARNING;
	}

	return no_neighbor_aspath_loop_detection_magic(self, vty, argc, argv, neighbor);
}

/* af_rd_vpn_export => "[no] rd vpn export ASN:NN_OR_IP-ADDRESS:NN$rd_str" */
DEFUN_CMD_FUNC_DECL(af_rd_vpn_export)
#define funcdecl_af_rd_vpn_export static int af_rd_vpn_export_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * rd_str)
funcdecl_af_rd_vpn_export;
DEFUN_CMD_FUNC_TEXT(af_rd_vpn_export)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *rd_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rd_str")) {
			rd_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!rd_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rd_str");
		return CMD_WARNING;
	}

	return af_rd_vpn_export_magic(self, vty, argc, argv, no, rd_str);
}

/* af_label_vpn_export => "[no] label vpn export <(0-1048575)$label_val|auto$label_auto>" */
DEFUN_CMD_FUNC_DECL(af_label_vpn_export)
#define funcdecl_af_label_vpn_export static int af_label_vpn_export_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long label_val,\
	const char * label_val_str __attribute__ ((unused)),\
	const char * label_auto)
funcdecl_af_label_vpn_export;
DEFUN_CMD_FUNC_TEXT(af_label_vpn_export)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long label_val = 0;
	const char *label_val_str = NULL;
	const char *label_auto = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label_val")) {
			label_val_str = argv[_i]->arg;
			char *_end;
			label_val = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "label_auto")) {
			label_auto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return af_label_vpn_export_magic(self, vty, argc, argv, no, label_val, label_val_str, label_auto);
}

/* af_sid_vpn_export => "[no] sid vpn export <(1-1048575)$sid_idx|auto$sid_auto>" */
DEFUN_CMD_FUNC_DECL(af_sid_vpn_export)
#define funcdecl_af_sid_vpn_export static int af_sid_vpn_export_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long sid_idx,\
	const char * sid_idx_str __attribute__ ((unused)),\
	const char * sid_auto)
funcdecl_af_sid_vpn_export;
DEFUN_CMD_FUNC_TEXT(af_sid_vpn_export)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long sid_idx = 0;
	const char *sid_idx_str = NULL;
	const char *sid_auto = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "sid_idx")) {
			sid_idx_str = argv[_i]->arg;
			char *_end;
			sid_idx = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "sid_auto")) {
			sid_auto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return af_sid_vpn_export_magic(self, vty, argc, argv, no, sid_idx, sid_idx_str, sid_auto);
}

/* af_nexthop_vpn_export => "[no] nexthop vpn export [<A.B.C.D|X:X::X:X>$nexthop_su]" */
DEFUN_CMD_FUNC_DECL(af_nexthop_vpn_export)
#define funcdecl_af_nexthop_vpn_export static int af_nexthop_vpn_export_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const union sockunion * nexthop_su,\
	const char * nexthop_su_str __attribute__ ((unused)))
funcdecl_af_nexthop_vpn_export;
DEFUN_CMD_FUNC_TEXT(af_nexthop_vpn_export)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	union sockunion s__nexthop_su = { .sa.sa_family = AF_UNSPEC }, *nexthop_su = NULL;
	const char *nexthop_su_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "nexthop_su")) {
			nexthop_su_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__nexthop_su.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__nexthop_su.sin6.sin6_addr);
				nexthop_su = &s__nexthop_su;
			} else {
				s__nexthop_su.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__nexthop_su.sin.sin_addr);
				nexthop_su = &s__nexthop_su;
			}
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

	return af_nexthop_vpn_export_magic(self, vty, argc, argv, no, nexthop_su, nexthop_su_str);
}

/* af_rt_vpn_imexport => "[no] <rt|route-target> vpn <import|export|both>$direction_str RTLIST..." */
DEFUN_CMD_FUNC_DECL(af_rt_vpn_imexport)
#define funcdecl_af_rt_vpn_imexport static int af_rt_vpn_imexport_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * direction_str,\
	const char * rtlist)
funcdecl_af_rt_vpn_imexport;
DEFUN_CMD_FUNC_TEXT(af_rt_vpn_imexport)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *direction_str = NULL;
	const char *rtlist = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "direction_str")) {
			direction_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rtlist")) {
			rtlist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!direction_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "direction_str");
		return CMD_WARNING;
	}
	if (!rtlist) {
		vty_out(vty, "Internal CLI error [%s]\n", "rtlist");
		return CMD_WARNING;
	}

	return af_rt_vpn_imexport_magic(self, vty, argc, argv, no, direction_str, rtlist);
}

/* af_route_map_vpn_imexport => "[no] route-map vpn <import|export>$direction_str RMAP$rmap_str" */
DEFUN_CMD_FUNC_DECL(af_route_map_vpn_imexport)
#define funcdecl_af_route_map_vpn_imexport static int af_route_map_vpn_imexport_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * direction_str,\
	const char * rmap_str)
funcdecl_af_route_map_vpn_imexport;
DEFUN_CMD_FUNC_TEXT(af_route_map_vpn_imexport)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *direction_str = NULL;
	const char *rmap_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "direction_str")) {
			direction_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap_str")) {
			rmap_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!direction_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "direction_str");
		return CMD_WARNING;
	}
	if (!rmap_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rmap_str");
		return CMD_WARNING;
	}

	return af_route_map_vpn_imexport_magic(self, vty, argc, argv, no, direction_str, rmap_str);
}

/* af_import_vrf_route_map => "import vrf route-map RMAP$rmap_str" */
DEFUN_CMD_FUNC_DECL(af_import_vrf_route_map)
#define funcdecl_af_import_vrf_route_map static int af_import_vrf_route_map_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * rmap_str)
funcdecl_af_import_vrf_route_map;
DEFUN_CMD_FUNC_TEXT(af_import_vrf_route_map)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *rmap_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rmap_str")) {
			rmap_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!rmap_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rmap_str");
		return CMD_WARNING;
	}

	return af_import_vrf_route_map_magic(self, vty, argc, argv, rmap_str);
}

/* af_no_import_vrf_route_map => "no import vrf route-map [RMAP$rmap_str]" */
DEFUN_CMD_FUNC_DECL(af_no_import_vrf_route_map)
#define funcdecl_af_no_import_vrf_route_map static int af_no_import_vrf_route_map_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * rmap_str)
funcdecl_af_no_import_vrf_route_map;
DEFUN_CMD_FUNC_TEXT(af_no_import_vrf_route_map)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *rmap_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rmap_str")) {
			rmap_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return af_no_import_vrf_route_map_magic(self, vty, argc, argv, rmap_str);
}

/* bgp_imexport_vrf => "[no] import vrf VIEWVRFNAME$import_name" */
DEFUN_CMD_FUNC_DECL(bgp_imexport_vrf)
#define funcdecl_bgp_imexport_vrf static int bgp_imexport_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * import_name)
funcdecl_bgp_imexport_vrf;
DEFUN_CMD_FUNC_TEXT(bgp_imexport_vrf)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *import_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "import_name")) {
			import_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!import_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "import_name");
		return CMD_WARNING;
	}

	return bgp_imexport_vrf_magic(self, vty, argc, argv, no, import_name);
}

/* bgp_imexport_vpn => "[no] <import|export>$direction_str vpn" */
DEFUN_CMD_FUNC_DECL(bgp_imexport_vpn)
#define funcdecl_bgp_imexport_vpn static int bgp_imexport_vpn_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * direction_str)
funcdecl_bgp_imexport_vpn;
DEFUN_CMD_FUNC_TEXT(bgp_imexport_vpn)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *direction_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "direction_str")) {
			direction_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!direction_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "direction_str");
		return CMD_WARNING;
	}

	return bgp_imexport_vpn_magic(self, vty, argc, argv, no, direction_str);
}

/* af_routetarget_import => "[no] <rt|route-target|route-target6|rt6> redirect import RTLIST..." */
DEFUN_CMD_FUNC_DECL(af_routetarget_import)
#define funcdecl_af_routetarget_import static int af_routetarget_import_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * rtlist)
funcdecl_af_routetarget_import;
DEFUN_CMD_FUNC_TEXT(af_routetarget_import)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *rtlist = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rtlist")) {
			rtlist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!rtlist) {
		vty_out(vty, "Internal CLI error [%s]\n", "rtlist");
		return CMD_WARNING;
	}

	return af_routetarget_import_magic(self, vty, argc, argv, no, rtlist);
}

/* bgp_srv6_locator => "locator NAME$name" */
DEFUN_CMD_FUNC_DECL(bgp_srv6_locator)
#define funcdecl_bgp_srv6_locator static int bgp_srv6_locator_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_bgp_srv6_locator;
DEFUN_CMD_FUNC_TEXT(bgp_srv6_locator)
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
	if (!name) {
		vty_out(vty, "Internal CLI error [%s]\n", "name");
		return CMD_WARNING;
	}

	return bgp_srv6_locator_magic(self, vty, argc, argv, name);
}

/* no_bgp_srv6_locator => "no locator NAME$name" */
DEFUN_CMD_FUNC_DECL(no_bgp_srv6_locator)
#define funcdecl_no_bgp_srv6_locator static int no_bgp_srv6_locator_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_no_bgp_srv6_locator;
DEFUN_CMD_FUNC_TEXT(no_bgp_srv6_locator)
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
	if (!name) {
		vty_out(vty, "Internal CLI error [%s]\n", "name");
		return CMD_WARNING;
	}

	return no_bgp_srv6_locator_magic(self, vty, argc, argv, name);
}

/* show_bgp_srv6 => "show bgp segment-routing srv6" */
DEFUN_CMD_FUNC_DECL(show_bgp_srv6)
#define funcdecl_show_bgp_srv6 static int show_bgp_srv6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_bgp_srv6;
DEFUN_CMD_FUNC_TEXT(show_bgp_srv6)
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

	return show_bgp_srv6_magic(self, vty, argc, argv);
}

/* show_ip_bgp_summary => "show [ip] bgp [<view|vrf> VIEWVRFNAME] [<ipv4|ipv6> [<unicast|multicast|vpn|labeled-unicast|flowspec>]] [all$all] summary [established|failed] [<neighbor <A.B.C.D|X:X::X:X|WORD>|remote-as <(1-4294967295)|internal|external>>] [terse] [wide] [json$uj]" */
DEFUN_CMD_FUNC_DECL(show_ip_bgp_summary)
#define funcdecl_show_ip_bgp_summary static int show_ip_bgp_summary_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * viewvrfname,\
	const char * all,\
	const char * neighbor,\
	long remote_as,\
	const char * remote_as_str __attribute__ ((unused)),\
	const char * uj)
funcdecl_show_ip_bgp_summary;
DEFUN_CMD_FUNC_TEXT(show_ip_bgp_summary)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *viewvrfname = NULL;
	const char *all = NULL;
	const char *neighbor = NULL;
	long remote_as = 0;
	const char *remote_as_str = NULL;
	const char *uj = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "viewvrfname")) {
			viewvrfname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "all")) {
			all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "remote_as")) {
			remote_as_str = argv[_i]->arg;
			char *_end;
			remote_as = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_bgp_summary_magic(self, vty, argc, argv, viewvrfname, all, neighbor, remote_as, remote_as_str, uj);
}

/* show_ip_bgp_instance_updgrps_adj_s => "show [ip]$ip bgp [<view|vrf> VIEWVRFNAME$vrf] [<ipv4|ipv6>$afi <unicast|multicast|vpn>$safi] update-groups [SUBGROUP-ID]$sgid <advertise-queue|advertised-routes|packet-queue>$rtq" */
DEFUN_CMD_FUNC_DECL(show_ip_bgp_instance_updgrps_adj_s)
#define funcdecl_show_ip_bgp_instance_updgrps_adj_s static int show_ip_bgp_instance_updgrps_adj_s_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ip,\
	const char * vrf,\
	const char * afi,\
	const char * safi,\
	const char * sgid,\
	const char * rtq)
funcdecl_show_ip_bgp_instance_updgrps_adj_s;
DEFUN_CMD_FUNC_TEXT(show_ip_bgp_instance_updgrps_adj_s)
{
#if 6 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ip = NULL;
	const char *vrf = NULL;
	const char *afi = NULL;
	const char *safi = NULL;
	const char *sgid = NULL;
	const char *rtq = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ip")) {
			ip = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "afi")) {
			afi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "safi")) {
			safi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "sgid")) {
			sgid = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rtq")) {
			rtq = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!rtq) {
		vty_out(vty, "Internal CLI error [%s]\n", "rtq");
		return CMD_WARNING;
	}

	return show_ip_bgp_instance_updgrps_adj_s_magic(self, vty, argc, argv, ip, vrf, afi, safi, sgid, rtq);
}

/* bgp_retain_route_target => "[no$no] bgp retain route-target all" */
DEFUN_CMD_FUNC_DECL(bgp_retain_route_target)
#define funcdecl_bgp_retain_route_target static int bgp_retain_route_target_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bgp_retain_route_target;
DEFUN_CMD_FUNC_TEXT(bgp_retain_route_target)
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

	return bgp_retain_route_target_magic(self, vty, argc, argv, no);
}

/* mpls_bgp_forwarding => "[no$no] mpls bgp forwarding" */
DEFUN_CMD_FUNC_DECL(mpls_bgp_forwarding)
#define funcdecl_mpls_bgp_forwarding static int mpls_bgp_forwarding_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_mpls_bgp_forwarding;
DEFUN_CMD_FUNC_TEXT(mpls_bgp_forwarding)
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

	return mpls_bgp_forwarding_magic(self, vty, argc, argv, no);
}

