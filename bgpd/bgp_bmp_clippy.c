/* bmp_targets_main => "bmp targets BMPTARGETS" */
DEFUN_CMD_FUNC_DECL(bmp_targets_main)
#define funcdecl_bmp_targets_main static int bmp_targets_main_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * bmptargets)
funcdecl_bmp_targets_main;
DEFUN_CMD_FUNC_TEXT(bmp_targets_main)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *bmptargets = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bmptargets")) {
			bmptargets = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!bmptargets) {
		vty_out(vty, "Internal CLI error [%s]\n", "bmptargets");
		return CMD_WARNING;
	}

	return bmp_targets_main_magic(self, vty, argc, argv, bmptargets);
}

/* no_bmp_targets_main => "no bmp targets BMPTARGETS" */
DEFUN_CMD_FUNC_DECL(no_bmp_targets_main)
#define funcdecl_no_bmp_targets_main static int no_bmp_targets_main_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * bmptargets)
funcdecl_no_bmp_targets_main;
DEFUN_CMD_FUNC_TEXT(no_bmp_targets_main)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *bmptargets = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bmptargets")) {
			bmptargets = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!bmptargets) {
		vty_out(vty, "Internal CLI error [%s]\n", "bmptargets");
		return CMD_WARNING;
	}

	return no_bmp_targets_main_magic(self, vty, argc, argv, bmptargets);
}

/* bmp_listener_main => "bmp listener <X:X::X:X|A.B.C.D> port (1-65535)" */
DEFUN_CMD_FUNC_DECL(bmp_listener_main)
#define funcdecl_bmp_listener_main static int bmp_listener_main_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const union sockunion * listener,\
	const char * listener_str __attribute__ ((unused)),\
	long port,\
	const char * port_str __attribute__ ((unused)))
funcdecl_bmp_listener_main;
DEFUN_CMD_FUNC_TEXT(bmp_listener_main)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	union sockunion s__listener = { .sa.sa_family = AF_UNSPEC }, *listener = NULL;
	const char *listener_str = NULL;
	long port = 0;
	const char *port_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "listener")) {
			listener_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__listener.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__listener.sin6.sin6_addr);
				listener = &s__listener;
			} else {
				s__listener.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__listener.sin.sin_addr);
				listener = &s__listener;
			}
		}
		if (!strcmp(argv[_i]->varname, "port")) {
			port_str = argv[_i]->arg;
			char *_end;
			port = strtol(argv[_i]->arg, &_end, 10);
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
	if (!listener) {
		vty_out(vty, "Internal CLI error [%s]\n", "listener");
		return CMD_WARNING;
	}
	if (!listener_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "listener_str");
		return CMD_WARNING;
	}
	if (!port_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "port_str");
		return CMD_WARNING;
	}

	return bmp_listener_main_magic(self, vty, argc, argv, listener, listener_str, port, port_str);
}

/* no_bmp_listener_main => "no bmp listener <X:X::X:X|A.B.C.D> port (1-65535)" */
DEFUN_CMD_FUNC_DECL(no_bmp_listener_main)
#define funcdecl_no_bmp_listener_main static int no_bmp_listener_main_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const union sockunion * listener,\
	const char * listener_str __attribute__ ((unused)),\
	long port,\
	const char * port_str __attribute__ ((unused)))
funcdecl_no_bmp_listener_main;
DEFUN_CMD_FUNC_TEXT(no_bmp_listener_main)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	union sockunion s__listener = { .sa.sa_family = AF_UNSPEC }, *listener = NULL;
	const char *listener_str = NULL;
	long port = 0;
	const char *port_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "listener")) {
			listener_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__listener.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__listener.sin6.sin6_addr);
				listener = &s__listener;
			} else {
				s__listener.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__listener.sin.sin_addr);
				listener = &s__listener;
			}
		}
		if (!strcmp(argv[_i]->varname, "port")) {
			port_str = argv[_i]->arg;
			char *_end;
			port = strtol(argv[_i]->arg, &_end, 10);
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
	if (!listener) {
		vty_out(vty, "Internal CLI error [%s]\n", "listener");
		return CMD_WARNING;
	}
	if (!listener_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "listener_str");
		return CMD_WARNING;
	}
	if (!port_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "port_str");
		return CMD_WARNING;
	}

	return no_bmp_listener_main_magic(self, vty, argc, argv, listener, listener_str, port, port_str);
}

/* bmp_connect => "[no] bmp connect HOSTNAME port (1-65535) {min-retry (100-86400000)|max-retry (100-86400000)} [source-interface <WORD$srcif>]" */
DEFUN_CMD_FUNC_DECL(bmp_connect)
#define funcdecl_bmp_connect static int bmp_connect_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * hostname,\
	long port,\
	const char * port_str __attribute__ ((unused)),\
	long min_retry,\
	const char * min_retry_str __attribute__ ((unused)),\
	long max_retry,\
	const char * max_retry_str __attribute__ ((unused)),\
	const char * srcif)
funcdecl_bmp_connect;
DEFUN_CMD_FUNC_TEXT(bmp_connect)
{
#if 6 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *hostname = NULL;
	long port = 0;
	const char *port_str = NULL;
	long min_retry = 0;
	const char *min_retry_str = NULL;
	long max_retry = 0;
	const char *max_retry_str = NULL;
	const char *srcif = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "hostname")) {
			hostname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "port")) {
			port_str = argv[_i]->arg;
			char *_end;
			port = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "min_retry")) {
			min_retry_str = argv[_i]->arg;
			char *_end;
			min_retry = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "max_retry")) {
			max_retry_str = argv[_i]->arg;
			char *_end;
			max_retry = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "srcif")) {
			srcif = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hostname) {
		vty_out(vty, "Internal CLI error [%s]\n", "hostname");
		return CMD_WARNING;
	}
	if (!port_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "port_str");
		return CMD_WARNING;
	}

	return bmp_connect_magic(self, vty, argc, argv, no, hostname, port, port_str, min_retry, min_retry_str, max_retry, max_retry_str, srcif);
}

/* bmp_acl => "[no] <ip|ipv6>$af access-list ACCESSLIST_NAME$access_list" */
DEFUN_CMD_FUNC_DECL(bmp_acl)
#define funcdecl_bmp_acl static int bmp_acl_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * af,\
	const char * access_list)
funcdecl_bmp_acl;
DEFUN_CMD_FUNC_TEXT(bmp_acl)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *af = NULL;
	const char *access_list = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "af")) {
			af = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "access_list")) {
			access_list = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!af) {
		vty_out(vty, "Internal CLI error [%s]\n", "af");
		return CMD_WARNING;
	}
	if (!access_list) {
		vty_out(vty, "Internal CLI error [%s]\n", "access_list");
		return CMD_WARNING;
	}

	return bmp_acl_magic(self, vty, argc, argv, no, af, access_list);
}

/* bmp_stats_cfg => "[no] bmp stats [interval (100-86400000)]" */
DEFUN_CMD_FUNC_DECL(bmp_stats_cfg)
#define funcdecl_bmp_stats_cfg static int bmp_stats_cfg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_bmp_stats_cfg;
DEFUN_CMD_FUNC_TEXT(bmp_stats_cfg)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long interval = 0;
	const char *interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return bmp_stats_cfg_magic(self, vty, argc, argv, no, interval, interval_str);
}

/* bmp_monitor_cfg => "[no] bmp monitor <ipv4|ipv6|l2vpn> <unicast|multicast|evpn|vpn> <pre-policy|post-policy>$policy" */
DEFUN_CMD_FUNC_DECL(bmp_monitor_cfg)
#define funcdecl_bmp_monitor_cfg static int bmp_monitor_cfg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * policy)
funcdecl_bmp_monitor_cfg;
DEFUN_CMD_FUNC_TEXT(bmp_monitor_cfg)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *policy = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "policy")) {
			policy = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!policy) {
		vty_out(vty, "Internal CLI error [%s]\n", "policy");
		return CMD_WARNING;
	}

	return bmp_monitor_cfg_magic(self, vty, argc, argv, no, policy);
}

/* bmp_mirror_cfg => "[no] bmp mirror" */
DEFUN_CMD_FUNC_DECL(bmp_mirror_cfg)
#define funcdecl_bmp_mirror_cfg static int bmp_mirror_cfg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bmp_mirror_cfg;
DEFUN_CMD_FUNC_TEXT(bmp_mirror_cfg)
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

	return bmp_mirror_cfg_magic(self, vty, argc, argv, no);
}

/* bmp_mirror_limit_cfg => "bmp mirror buffer-limit (0-4294967294)" */
DEFUN_CMD_FUNC_DECL(bmp_mirror_limit_cfg)
#define funcdecl_bmp_mirror_limit_cfg static int bmp_mirror_limit_cfg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long buffer_limit,\
	const char * buffer_limit_str __attribute__ ((unused)))
funcdecl_bmp_mirror_limit_cfg;
DEFUN_CMD_FUNC_TEXT(bmp_mirror_limit_cfg)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long buffer_limit = 0;
	const char *buffer_limit_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "buffer_limit")) {
			buffer_limit_str = argv[_i]->arg;
			char *_end;
			buffer_limit = strtol(argv[_i]->arg, &_end, 10);
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
	if (!buffer_limit_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "buffer_limit_str");
		return CMD_WARNING;
	}

	return bmp_mirror_limit_cfg_magic(self, vty, argc, argv, buffer_limit, buffer_limit_str);
}

/* no_bmp_mirror_limit_cfg => "no bmp mirror buffer-limit [(0-4294967294)]" */
DEFUN_CMD_FUNC_DECL(no_bmp_mirror_limit_cfg)
#define funcdecl_no_bmp_mirror_limit_cfg static int no_bmp_mirror_limit_cfg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long buffer_limit,\
	const char * buffer_limit_str __attribute__ ((unused)))
funcdecl_no_bmp_mirror_limit_cfg;
DEFUN_CMD_FUNC_TEXT(no_bmp_mirror_limit_cfg)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long buffer_limit = 0;
	const char *buffer_limit_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "buffer_limit")) {
			buffer_limit_str = argv[_i]->arg;
			char *_end;
			buffer_limit = strtol(argv[_i]->arg, &_end, 10);
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

	return no_bmp_mirror_limit_cfg_magic(self, vty, argc, argv, buffer_limit, buffer_limit_str);
}

/* show_bmp => "show bmp" */
DEFUN_CMD_FUNC_DECL(show_bmp)
#define funcdecl_show_bmp static int show_bmp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_bmp;
DEFUN_CMD_FUNC_TEXT(show_bmp)
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

	return show_bmp_magic(self, vty, argc, argv);
}

