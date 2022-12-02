/* show_debugging_pathd_pcep => "show debugging pathd-pcep" */
DEFUN_CMD_FUNC_DECL(show_debugging_pathd_pcep)
#define funcdecl_show_debugging_pathd_pcep static int show_debugging_pathd_pcep_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_debugging_pathd_pcep;
DEFUN_CMD_FUNC_TEXT(show_debugging_pathd_pcep)
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

	return show_debugging_pathd_pcep_magic(self, vty, argc, argv);
}

/* pcep_cli_debug => "[no] debug pathd pcep [basic]$basic_str [path]$path_str [message]$message_str [pceplib]$pceplib_str" */
DEFUN_CMD_FUNC_DECL(pcep_cli_debug)
#define funcdecl_pcep_cli_debug static int pcep_cli_debug_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * basic_str,\
	const char * path_str,\
	const char * message_str,\
	const char * pceplib_str)
funcdecl_pcep_cli_debug;
DEFUN_CMD_FUNC_TEXT(pcep_cli_debug)
{
#if 5 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *basic_str = NULL;
	const char *path_str = NULL;
	const char *message_str = NULL;
	const char *pceplib_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "basic_str")) {
			basic_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "path_str")) {
			path_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "message_str")) {
			message_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "pceplib_str")) {
			pceplib_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return pcep_cli_debug_magic(self, vty, argc, argv, no, basic_str, path_str, message_str, pceplib_str);
}

/* pcep_cli_show_srte_pcep_counters => "show sr-te pcep counters" */
DEFUN_CMD_FUNC_DECL(pcep_cli_show_srte_pcep_counters)
#define funcdecl_pcep_cli_show_srte_pcep_counters static int pcep_cli_show_srte_pcep_counters_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_pcep_cli_show_srte_pcep_counters;
DEFUN_CMD_FUNC_TEXT(pcep_cli_show_srte_pcep_counters)
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

	return pcep_cli_show_srte_pcep_counters_magic(self, vty, argc, argv);
}

/* pcep_cli_pcep => "pcep" */
DEFUN_CMD_FUNC_DECL(pcep_cli_pcep)
#define funcdecl_pcep_cli_pcep static int pcep_cli_pcep_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_pcep_cli_pcep;
DEFUN_CMD_FUNC_TEXT(pcep_cli_pcep)
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

	return pcep_cli_pcep_magic(self, vty, argc, argv);
}

/* pcep_cli_pcep_pce_config => "pce-config WORD$name" */
DEFUN_CMD_FUNC_DECL(pcep_cli_pcep_pce_config)
#define funcdecl_pcep_cli_pcep_pce_config static int pcep_cli_pcep_pce_config_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_pcep_cli_pcep_pce_config;
DEFUN_CMD_FUNC_TEXT(pcep_cli_pcep_pce_config)
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

	return pcep_cli_pcep_pce_config_magic(self, vty, argc, argv, name);
}

/* pcep_cli_pcep_no_pce_config => "no pce-config WORD$name" */
DEFUN_CMD_FUNC_DECL(pcep_cli_pcep_no_pce_config)
#define funcdecl_pcep_cli_pcep_no_pce_config static int pcep_cli_pcep_no_pce_config_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_pcep_cli_pcep_no_pce_config;
DEFUN_CMD_FUNC_TEXT(pcep_cli_pcep_no_pce_config)
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

	return pcep_cli_pcep_no_pce_config_magic(self, vty, argc, argv, name);
}

/* pcep_cli_show_srte_pcep_pce_config => "show sr-te pcep pce-config [<default|WORD>$name]" */
DEFUN_CMD_FUNC_DECL(pcep_cli_show_srte_pcep_pce_config)
#define funcdecl_pcep_cli_show_srte_pcep_pce_config static int pcep_cli_show_srte_pcep_pce_config_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_pcep_cli_show_srte_pcep_pce_config;
DEFUN_CMD_FUNC_TEXT(pcep_cli_show_srte_pcep_pce_config)
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

	return pcep_cli_show_srte_pcep_pce_config_magic(self, vty, argc, argv, name);
}

/* pcep_cli_pce => "pce WORD$name" */
DEFUN_CMD_FUNC_DECL(pcep_cli_pce)
#define funcdecl_pcep_cli_pce static int pcep_cli_pce_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_pcep_cli_pce;
DEFUN_CMD_FUNC_TEXT(pcep_cli_pce)
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

	return pcep_cli_pce_magic(self, vty, argc, argv, name);
}

/* pcep_cli_no_pce => "no pce WORD$name" */
DEFUN_CMD_FUNC_DECL(pcep_cli_no_pce)
#define funcdecl_pcep_cli_no_pce static int pcep_cli_no_pce_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_pcep_cli_no_pce;
DEFUN_CMD_FUNC_TEXT(pcep_cli_no_pce)
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

	return pcep_cli_no_pce_magic(self, vty, argc, argv, name);
}

/* pcep_cli_show_srte_pcep_pce => "show sr-te pcep pce [WORD$name]" */
DEFUN_CMD_FUNC_DECL(pcep_cli_show_srte_pcep_pce)
#define funcdecl_pcep_cli_show_srte_pcep_pce static int pcep_cli_show_srte_pcep_pce_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_pcep_cli_show_srte_pcep_pce;
DEFUN_CMD_FUNC_TEXT(pcep_cli_show_srte_pcep_pce)
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

	return pcep_cli_show_srte_pcep_pce_magic(self, vty, argc, argv, name);
}

/* pcep_cli_peer_sr_draft07 => "sr-draft07" */
DEFUN_CMD_FUNC_DECL(pcep_cli_peer_sr_draft07)
#define funcdecl_pcep_cli_peer_sr_draft07 static int pcep_cli_peer_sr_draft07_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_pcep_cli_peer_sr_draft07;
DEFUN_CMD_FUNC_TEXT(pcep_cli_peer_sr_draft07)
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

	return pcep_cli_peer_sr_draft07_magic(self, vty, argc, argv);
}

/* pcep_cli_peer_pce_initiated => "pce-initiated" */
DEFUN_CMD_FUNC_DECL(pcep_cli_peer_pce_initiated)
#define funcdecl_pcep_cli_peer_pce_initiated static int pcep_cli_peer_pce_initiated_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_pcep_cli_peer_pce_initiated;
DEFUN_CMD_FUNC_TEXT(pcep_cli_peer_pce_initiated)
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

	return pcep_cli_peer_pce_initiated_magic(self, vty, argc, argv);
}

/* pcep_cli_peer_tcp_md5_auth => "tcp-md5-auth WORD" */
DEFUN_CMD_FUNC_DECL(pcep_cli_peer_tcp_md5_auth)
#define funcdecl_pcep_cli_peer_tcp_md5_auth static int pcep_cli_peer_tcp_md5_auth_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * tcp_md5_auth)
funcdecl_pcep_cli_peer_tcp_md5_auth;
DEFUN_CMD_FUNC_TEXT(pcep_cli_peer_tcp_md5_auth)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *tcp_md5_auth = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "tcp_md5_auth")) {
			tcp_md5_auth = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!tcp_md5_auth) {
		vty_out(vty, "Internal CLI error [%s]\n", "tcp_md5_auth");
		return CMD_WARNING;
	}

	return pcep_cli_peer_tcp_md5_auth_magic(self, vty, argc, argv, tcp_md5_auth);
}

/* pcep_cli_peer_address => "address <ip A.B.C.D | ipv6 X:X::X:X> [port (1024-65535)]" */
DEFUN_CMD_FUNC_DECL(pcep_cli_peer_address)
#define funcdecl_pcep_cli_peer_address static int pcep_cli_peer_address_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr ip,\
	const char * ip_str __attribute__ ((unused)),\
	struct in6_addr ipv6,\
	const char * ipv6_str __attribute__ ((unused)),\
	long port,\
	const char * port_str __attribute__ ((unused)))
funcdecl_pcep_cli_peer_address;
DEFUN_CMD_FUNC_TEXT(pcep_cli_peer_address)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr ip = { INADDR_ANY };
	const char *ip_str = NULL;
	struct in6_addr ipv6 = {};
	const char *ipv6_str = NULL;
	long port = 0;
	const char *port_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ip")) {
			ip_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &ip);
		}
		if (!strcmp(argv[_i]->varname, "ipv6")) {
			ipv6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &ipv6);
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

	return pcep_cli_peer_address_magic(self, vty, argc, argv, ip, ip_str, ipv6, ipv6_str, port, port_str);
}

/* pcep_cli_peer_source_address => "source-address [ip A.B.C.D | ipv6 X:X::X:X] [port (1024-65535)]" */
DEFUN_CMD_FUNC_DECL(pcep_cli_peer_source_address)
#define funcdecl_pcep_cli_peer_source_address static int pcep_cli_peer_source_address_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr ip,\
	const char * ip_str __attribute__ ((unused)),\
	struct in6_addr ipv6,\
	const char * ipv6_str __attribute__ ((unused)),\
	long port,\
	const char * port_str __attribute__ ((unused)))
funcdecl_pcep_cli_peer_source_address;
DEFUN_CMD_FUNC_TEXT(pcep_cli_peer_source_address)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr ip = { INADDR_ANY };
	const char *ip_str = NULL;
	struct in6_addr ipv6 = {};
	const char *ipv6_str = NULL;
	long port = 0;
	const char *port_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ip")) {
			ip_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &ip);
		}
		if (!strcmp(argv[_i]->varname, "ipv6")) {
			ipv6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &ipv6);
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

	return pcep_cli_peer_source_address_magic(self, vty, argc, argv, ip, ip_str, ipv6, ipv6_str, port, port_str);
}

/* pcep_cli_peer_pcep_pce_config_ref => "config WORD$name" */
DEFUN_CMD_FUNC_DECL(pcep_cli_peer_pcep_pce_config_ref)
#define funcdecl_pcep_cli_peer_pcep_pce_config_ref static int pcep_cli_peer_pcep_pce_config_ref_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_pcep_cli_peer_pcep_pce_config_ref;
DEFUN_CMD_FUNC_TEXT(pcep_cli_peer_pcep_pce_config_ref)
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

	return pcep_cli_peer_pcep_pce_config_ref_magic(self, vty, argc, argv, name);
}

/* pcep_cli_peer_timers => "timer [keep-alive (1-63)] [min-peer-keep-alive (1-255)] [max-peer-keep-alive (1-255)] [dead-timer (4-255)] [min-peer-dead-timer (4-255)] [max-peer-dead-timer (4-255)] [pcep-request (1-120)] [session-timeout-interval (1-120)] [delegation-timeout (1-60)]" */
DEFUN_CMD_FUNC_DECL(pcep_cli_peer_timers)
#define funcdecl_pcep_cli_peer_timers static int pcep_cli_peer_timers_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long keep_alive,\
	const char * keep_alive_str __attribute__ ((unused)),\
	long min_peer_keep_alive,\
	const char * min_peer_keep_alive_str __attribute__ ((unused)),\
	long max_peer_keep_alive,\
	const char * max_peer_keep_alive_str __attribute__ ((unused)),\
	long dead_timer,\
	const char * dead_timer_str __attribute__ ((unused)),\
	long min_peer_dead_timer,\
	const char * min_peer_dead_timer_str __attribute__ ((unused)),\
	long max_peer_dead_timer,\
	const char * max_peer_dead_timer_str __attribute__ ((unused)),\
	long pcep_request,\
	const char * pcep_request_str __attribute__ ((unused)),\
	long session_timeout_interval,\
	const char * session_timeout_interval_str __attribute__ ((unused)),\
	long delegation_timeout,\
	const char * delegation_timeout_str __attribute__ ((unused)))
funcdecl_pcep_cli_peer_timers;
DEFUN_CMD_FUNC_TEXT(pcep_cli_peer_timers)
{
#if 9 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long keep_alive = 0;
	const char *keep_alive_str = NULL;
	long min_peer_keep_alive = 0;
	const char *min_peer_keep_alive_str = NULL;
	long max_peer_keep_alive = 0;
	const char *max_peer_keep_alive_str = NULL;
	long dead_timer = 0;
	const char *dead_timer_str = NULL;
	long min_peer_dead_timer = 0;
	const char *min_peer_dead_timer_str = NULL;
	long max_peer_dead_timer = 0;
	const char *max_peer_dead_timer_str = NULL;
	long pcep_request = 0;
	const char *pcep_request_str = NULL;
	long session_timeout_interval = 0;
	const char *session_timeout_interval_str = NULL;
	long delegation_timeout = 0;
	const char *delegation_timeout_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "keep_alive")) {
			keep_alive_str = argv[_i]->arg;
			char *_end;
			keep_alive = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "min_peer_keep_alive")) {
			min_peer_keep_alive_str = argv[_i]->arg;
			char *_end;
			min_peer_keep_alive = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "max_peer_keep_alive")) {
			max_peer_keep_alive_str = argv[_i]->arg;
			char *_end;
			max_peer_keep_alive = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "dead_timer")) {
			dead_timer_str = argv[_i]->arg;
			char *_end;
			dead_timer = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "min_peer_dead_timer")) {
			min_peer_dead_timer_str = argv[_i]->arg;
			char *_end;
			min_peer_dead_timer = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "max_peer_dead_timer")) {
			max_peer_dead_timer_str = argv[_i]->arg;
			char *_end;
			max_peer_dead_timer = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "pcep_request")) {
			pcep_request_str = argv[_i]->arg;
			char *_end;
			pcep_request = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "session_timeout_interval")) {
			session_timeout_interval_str = argv[_i]->arg;
			char *_end;
			session_timeout_interval = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "delegation_timeout")) {
			delegation_timeout_str = argv[_i]->arg;
			char *_end;
			delegation_timeout = strtol(argv[_i]->arg, &_end, 10);
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

	return pcep_cli_peer_timers_magic(self, vty, argc, argv, keep_alive, keep_alive_str, min_peer_keep_alive, min_peer_keep_alive_str, max_peer_keep_alive, max_peer_keep_alive_str, dead_timer, dead_timer_str, min_peer_dead_timer, min_peer_dead_timer_str, max_peer_dead_timer, max_peer_dead_timer_str, pcep_request, pcep_request_str, session_timeout_interval, session_timeout_interval_str, delegation_timeout, delegation_timeout_str);
}

/* pcep_cli_pcc => "pcc" */
DEFUN_CMD_FUNC_DECL(pcep_cli_pcc)
#define funcdecl_pcep_cli_pcc static int pcep_cli_pcc_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_pcep_cli_pcc;
DEFUN_CMD_FUNC_TEXT(pcep_cli_pcc)
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

	return pcep_cli_pcc_magic(self, vty, argc, argv);
}

/* pcep_cli_no_pcc => "no pcc" */
DEFUN_CMD_FUNC_DECL(pcep_cli_no_pcc)
#define funcdecl_pcep_cli_no_pcc static int pcep_cli_no_pcc_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_pcep_cli_no_pcc;
DEFUN_CMD_FUNC_TEXT(pcep_cli_no_pcc)
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

	return pcep_cli_no_pcc_magic(self, vty, argc, argv);
}

/* pcep_cli_pcc_pcc_msd => "msd (1-32)" */
DEFUN_CMD_FUNC_DECL(pcep_cli_pcc_pcc_msd)
#define funcdecl_pcep_cli_pcc_pcc_msd static int pcep_cli_pcc_pcc_msd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long msd,\
	const char * msd_str __attribute__ ((unused)))
funcdecl_pcep_cli_pcc_pcc_msd;
DEFUN_CMD_FUNC_TEXT(pcep_cli_pcc_pcc_msd)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long msd = 0;
	const char *msd_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "msd")) {
			msd_str = argv[_i]->arg;
			char *_end;
			msd = strtol(argv[_i]->arg, &_end, 10);
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
	if (!msd_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "msd_str");
		return CMD_WARNING;
	}

	return pcep_cli_pcc_pcc_msd_magic(self, vty, argc, argv, msd, msd_str);
}

/* pcep_cli_pcc_pcc_peer => "[no] peer WORD [precedence (1-255)]" */
DEFUN_CMD_FUNC_DECL(pcep_cli_pcc_pcc_peer)
#define funcdecl_pcep_cli_pcc_pcc_peer static int pcep_cli_pcc_pcc_peer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * peer,\
	long precedence,\
	const char * precedence_str __attribute__ ((unused)))
funcdecl_pcep_cli_pcc_pcc_peer;
DEFUN_CMD_FUNC_TEXT(pcep_cli_pcc_pcc_peer)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *peer = NULL;
	long precedence = 0;
	const char *precedence_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "peer")) {
			peer = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "precedence")) {
			precedence_str = argv[_i]->arg;
			char *_end;
			precedence = strtol(argv[_i]->arg, &_end, 10);
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
	if (!peer) {
		vty_out(vty, "Internal CLI error [%s]\n", "peer");
		return CMD_WARNING;
	}

	return pcep_cli_pcc_pcc_peer_magic(self, vty, argc, argv, no, peer, precedence, precedence_str);
}

/* pcep_cli_show_srte_pcc => "show sr-te pcep pcc" */
DEFUN_CMD_FUNC_DECL(pcep_cli_show_srte_pcc)
#define funcdecl_pcep_cli_show_srte_pcc static int pcep_cli_show_srte_pcc_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_pcep_cli_show_srte_pcc;
DEFUN_CMD_FUNC_TEXT(pcep_cli_show_srte_pcc)
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

	return pcep_cli_show_srte_pcc_magic(self, vty, argc, argv);
}

/* pcep_cli_show_srte_pcep_session => "show sr-te pcep session [WORD]$pce" */
DEFUN_CMD_FUNC_DECL(pcep_cli_show_srte_pcep_session)
#define funcdecl_pcep_cli_show_srte_pcep_session static int pcep_cli_show_srte_pcep_session_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * pce)
funcdecl_pcep_cli_show_srte_pcep_session;
DEFUN_CMD_FUNC_TEXT(pcep_cli_show_srte_pcep_session)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *pce = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "pce")) {
			pce = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return pcep_cli_show_srte_pcep_session_magic(self, vty, argc, argv, pce);
}

/* pcep_cli_clear_srte_pcep_session => "clear sr-te pcep session [WORD]$pce" */
DEFUN_CMD_FUNC_DECL(pcep_cli_clear_srte_pcep_session)
#define funcdecl_pcep_cli_clear_srte_pcep_session static int pcep_cli_clear_srte_pcep_session_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * pce)
funcdecl_pcep_cli_clear_srte_pcep_session;
DEFUN_CMD_FUNC_TEXT(pcep_cli_clear_srte_pcep_session)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *pce = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "pce")) {
			pce = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return pcep_cli_clear_srte_pcep_session_magic(self, vty, argc, argv, pce);
}

