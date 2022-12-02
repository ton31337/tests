/* bfd_show_peers => "show bfd [vrf NAME] peers [json]" */
DEFUN_CMD_FUNC_DECL(bfd_show_peers)
#define funcdecl_bfd_show_peers static int bfd_show_peers_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_bfd_show_peers;
DEFUN_CMD_FUNC_TEXT(bfd_show_peers)
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

	return bfd_show_peers_magic(self, vty, argc, argv, vrf);
}

/* bfd_show_peer => "show bfd [vrf NAME$vrf_name] peer <WORD$label|<A.B.C.D|X:X::X:X>$peer [{multihop|local-address <A.B.C.D|X:X::X:X>$local|interface IFNAME$ifname}]> [json]" */
DEFUN_CMD_FUNC_DECL(bfd_show_peer)
#define funcdecl_bfd_show_peer static int bfd_show_peer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * label,\
	const union sockunion * peer,\
	const char * peer_str __attribute__ ((unused)),\
	const union sockunion * local,\
	const char * local_str __attribute__ ((unused)),\
	const char * ifname)
funcdecl_bfd_show_peer;
DEFUN_CMD_FUNC_TEXT(bfd_show_peer)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	const char *label = NULL;
	union sockunion s__peer = { .sa.sa_family = AF_UNSPEC }, *peer = NULL;
	const char *peer_str = NULL;
	union sockunion s__local = { .sa.sa_family = AF_UNSPEC }, *local = NULL;
	const char *local_str = NULL;
	const char *ifname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "peer")) {
			peer_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__peer.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__peer.sin6.sin6_addr);
				peer = &s__peer;
			} else {
				s__peer.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__peer.sin.sin_addr);
				peer = &s__peer;
			}
		}
		if (!strcmp(argv[_i]->varname, "local")) {
			local_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__local.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__local.sin6.sin6_addr);
				local = &s__local;
			} else {
				s__local.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__local.sin.sin_addr);
				local = &s__local;
			}
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return bfd_show_peer_magic(self, vty, argc, argv, vrf_name, label, peer, peer_str, local, local_str, ifname);
}

/* bfd_show_peer_counters => "show bfd [vrf NAME$vrf_name] peer <WORD$label|<A.B.C.D|X:X::X:X>$peer [{multihop|local-address <A.B.C.D|X:X::X:X>$local|interface IFNAME$ifname}]> counters [json]" */
DEFUN_CMD_FUNC_DECL(bfd_show_peer_counters)
#define funcdecl_bfd_show_peer_counters static int bfd_show_peer_counters_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * label,\
	const union sockunion * peer,\
	const char * peer_str __attribute__ ((unused)),\
	const union sockunion * local,\
	const char * local_str __attribute__ ((unused)),\
	const char * ifname)
funcdecl_bfd_show_peer_counters;
DEFUN_CMD_FUNC_TEXT(bfd_show_peer_counters)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	const char *label = NULL;
	union sockunion s__peer = { .sa.sa_family = AF_UNSPEC }, *peer = NULL;
	const char *peer_str = NULL;
	union sockunion s__local = { .sa.sa_family = AF_UNSPEC }, *local = NULL;
	const char *local_str = NULL;
	const char *ifname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "peer")) {
			peer_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__peer.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__peer.sin6.sin6_addr);
				peer = &s__peer;
			} else {
				s__peer.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__peer.sin.sin_addr);
				peer = &s__peer;
			}
		}
		if (!strcmp(argv[_i]->varname, "local")) {
			local_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__local.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__local.sin6.sin6_addr);
				local = &s__local;
			} else {
				s__local.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__local.sin.sin_addr);
				local = &s__local;
			}
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return bfd_show_peer_counters_magic(self, vty, argc, argv, vrf_name, label, peer, peer_str, local, local_str, ifname);
}

/* bfd_show_peers_counters => "show bfd [vrf NAME] peers counters [json]" */
DEFUN_CMD_FUNC_DECL(bfd_show_peers_counters)
#define funcdecl_bfd_show_peers_counters static int bfd_show_peers_counters_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_bfd_show_peers_counters;
DEFUN_CMD_FUNC_TEXT(bfd_show_peers_counters)
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

	return bfd_show_peers_counters_magic(self, vty, argc, argv, vrf);
}

/* bfd_clear_peer_counters => "clear bfd [vrf <NAME$vrfname>] peer <WORD$label|<A.B.C.D|X:X::X:X>$peer [{multihop|local-address <A.B.C.D|X:X::X:X>$local|interface IFNAME$ifname}]> counters" */
DEFUN_CMD_FUNC_DECL(bfd_clear_peer_counters)
#define funcdecl_bfd_clear_peer_counters static int bfd_clear_peer_counters_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrfname,\
	const char * label,\
	const union sockunion * peer,\
	const char * peer_str __attribute__ ((unused)),\
	const union sockunion * local,\
	const char * local_str __attribute__ ((unused)),\
	const char * ifname)
funcdecl_bfd_clear_peer_counters;
DEFUN_CMD_FUNC_TEXT(bfd_clear_peer_counters)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrfname = NULL;
	const char *label = NULL;
	union sockunion s__peer = { .sa.sa_family = AF_UNSPEC }, *peer = NULL;
	const char *peer_str = NULL;
	union sockunion s__local = { .sa.sa_family = AF_UNSPEC }, *local = NULL;
	const char *local_str = NULL;
	const char *ifname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrfname")) {
			vrfname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "peer")) {
			peer_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__peer.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__peer.sin6.sin6_addr);
				peer = &s__peer;
			} else {
				s__peer.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__peer.sin.sin_addr);
				peer = &s__peer;
			}
		}
		if (!strcmp(argv[_i]->varname, "local")) {
			local_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__local.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__local.sin6.sin6_addr);
				local = &s__local;
			} else {
				s__local.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__local.sin.sin_addr);
				local = &s__local;
			}
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return bfd_clear_peer_counters_magic(self, vty, argc, argv, vrfname, label, peer, peer_str, local, local_str, ifname);
}

/* bfd_show_peers_brief => "show bfd [vrf <NAME$vrfname>] peers brief [json]" */
DEFUN_CMD_FUNC_DECL(bfd_show_peers_brief)
#define funcdecl_bfd_show_peers_brief static int bfd_show_peers_brief_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrfname)
funcdecl_bfd_show_peers_brief;
DEFUN_CMD_FUNC_TEXT(bfd_show_peers_brief)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrfname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrfname")) {
			vrfname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return bfd_show_peers_brief_magic(self, vty, argc, argv, vrfname);
}

/* show_bfd_distributed => "show bfd distributed" */
DEFUN_CMD_FUNC_DECL(show_bfd_distributed)
#define funcdecl_show_bfd_distributed static int show_bfd_distributed_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_bfd_distributed;
DEFUN_CMD_FUNC_TEXT(show_bfd_distributed)
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

	return show_bfd_distributed_magic(self, vty, argc, argv);
}

/* bfd_debug_distributed => "[no] debug bfd distributed" */
DEFUN_CMD_FUNC_DECL(bfd_debug_distributed)
#define funcdecl_bfd_debug_distributed static int bfd_debug_distributed_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bfd_debug_distributed;
DEFUN_CMD_FUNC_TEXT(bfd_debug_distributed)
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

	return bfd_debug_distributed_magic(self, vty, argc, argv, no);
}

/* bfd_debug_peer => "[no] debug bfd peer" */
DEFUN_CMD_FUNC_DECL(bfd_debug_peer)
#define funcdecl_bfd_debug_peer static int bfd_debug_peer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bfd_debug_peer;
DEFUN_CMD_FUNC_TEXT(bfd_debug_peer)
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

	return bfd_debug_peer_magic(self, vty, argc, argv, no);
}

/* bfd_debug_zebra => "[no] debug bfd zebra" */
DEFUN_CMD_FUNC_DECL(bfd_debug_zebra)
#define funcdecl_bfd_debug_zebra static int bfd_debug_zebra_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bfd_debug_zebra;
DEFUN_CMD_FUNC_TEXT(bfd_debug_zebra)
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

	return bfd_debug_zebra_magic(self, vty, argc, argv, no);
}

/* bfd_debug_network => "[no] debug bfd network" */
DEFUN_CMD_FUNC_DECL(bfd_debug_network)
#define funcdecl_bfd_debug_network static int bfd_debug_network_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bfd_debug_network;
DEFUN_CMD_FUNC_TEXT(bfd_debug_network)
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

	return bfd_debug_network_magic(self, vty, argc, argv, no);
}

