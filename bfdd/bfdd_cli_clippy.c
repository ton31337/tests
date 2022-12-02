/* bfd_enter => "bfd" */
DEFUN_CMD_FUNC_DECL(bfd_enter)
#define funcdecl_bfd_enter static int bfd_enter_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_bfd_enter;
DEFUN_CMD_FUNC_TEXT(bfd_enter)
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

	return bfd_enter_magic(self, vty, argc, argv);
}

/* bfd_peer_enter => "peer <A.B.C.D|X:X::X:X> [{multihop$multihop|local-address <A.B.C.D|X:X::X:X>|interface IFNAME$ifname|vrf NAME}]" */
DEFUN_CMD_FUNC_DECL(bfd_peer_enter)
#define funcdecl_bfd_peer_enter static int bfd_peer_enter_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const union sockunion * peer,\
	const char * peer_str __attribute__ ((unused)),\
	const char * multihop,\
	const union sockunion * local_address,\
	const char * local_address_str __attribute__ ((unused)),\
	const char * ifname,\
	const char * vrf)
funcdecl_bfd_peer_enter;
DEFUN_CMD_FUNC_TEXT(bfd_peer_enter)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	union sockunion s__peer = { .sa.sa_family = AF_UNSPEC }, *peer = NULL;
	const char *peer_str = NULL;
	const char *multihop = NULL;
	union sockunion s__local_address = { .sa.sa_family = AF_UNSPEC }, *local_address = NULL;
	const char *local_address_str = NULL;
	const char *ifname = NULL;
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

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
		if (!strcmp(argv[_i]->varname, "multihop")) {
			multihop = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "local_address")) {
			local_address_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__local_address.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__local_address.sin6.sin6_addr);
				local_address = &s__local_address;
			} else {
				s__local_address.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__local_address.sin.sin_addr);
				local_address = &s__local_address;
			}
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!peer) {
		vty_out(vty, "Internal CLI error [%s]\n", "peer");
		return CMD_WARNING;
	}
	if (!peer_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "peer_str");
		return CMD_WARNING;
	}

	return bfd_peer_enter_magic(self, vty, argc, argv, peer, peer_str, multihop, local_address, local_address_str, ifname, vrf);
}

/* bfd_no_peer => "no peer <A.B.C.D|X:X::X:X> [{multihop$multihop|local-address <A.B.C.D|X:X::X:X>|interface IFNAME$ifname|vrf NAME}]" */
DEFUN_CMD_FUNC_DECL(bfd_no_peer)
#define funcdecl_bfd_no_peer static int bfd_no_peer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const union sockunion * peer,\
	const char * peer_str __attribute__ ((unused)),\
	const char * multihop,\
	const union sockunion * local_address,\
	const char * local_address_str __attribute__ ((unused)),\
	const char * ifname,\
	const char * vrf)
funcdecl_bfd_no_peer;
DEFUN_CMD_FUNC_TEXT(bfd_no_peer)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	union sockunion s__peer = { .sa.sa_family = AF_UNSPEC }, *peer = NULL;
	const char *peer_str = NULL;
	const char *multihop = NULL;
	union sockunion s__local_address = { .sa.sa_family = AF_UNSPEC }, *local_address = NULL;
	const char *local_address_str = NULL;
	const char *ifname = NULL;
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

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
		if (!strcmp(argv[_i]->varname, "multihop")) {
			multihop = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "local_address")) {
			local_address_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__local_address.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__local_address.sin6.sin6_addr);
				local_address = &s__local_address;
			} else {
				s__local_address.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__local_address.sin.sin_addr);
				local_address = &s__local_address;
			}
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!peer) {
		vty_out(vty, "Internal CLI error [%s]\n", "peer");
		return CMD_WARNING;
	}
	if (!peer_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "peer_str");
		return CMD_WARNING;
	}

	return bfd_no_peer_magic(self, vty, argc, argv, peer, peer_str, multihop, local_address, local_address_str, ifname, vrf);
}

/* bfd_peer_shutdown => "[no] shutdown" */
DEFUN_CMD_FUNC_DECL(bfd_peer_shutdown)
#define funcdecl_bfd_peer_shutdown static int bfd_peer_shutdown_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bfd_peer_shutdown;
DEFUN_CMD_FUNC_TEXT(bfd_peer_shutdown)
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

	return bfd_peer_shutdown_magic(self, vty, argc, argv, no);
}

/* bfd_peer_passive => "[no] passive-mode" */
DEFUN_CMD_FUNC_DECL(bfd_peer_passive)
#define funcdecl_bfd_peer_passive static int bfd_peer_passive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bfd_peer_passive;
DEFUN_CMD_FUNC_TEXT(bfd_peer_passive)
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

	return bfd_peer_passive_magic(self, vty, argc, argv, no);
}

/* bfd_peer_minimum_ttl => "[no] minimum-ttl (1-254)$ttl" */
DEFUN_CMD_FUNC_DECL(bfd_peer_minimum_ttl)
#define funcdecl_bfd_peer_minimum_ttl static int bfd_peer_minimum_ttl_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long ttl,\
	const char * ttl_str __attribute__ ((unused)))
funcdecl_bfd_peer_minimum_ttl;
DEFUN_CMD_FUNC_TEXT(bfd_peer_minimum_ttl)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long ttl = 0;
	const char *ttl_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ttl")) {
			ttl_str = argv[_i]->arg;
			char *_end;
			ttl = strtol(argv[_i]->arg, &_end, 10);
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
	if (!ttl_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "ttl_str");
		return CMD_WARNING;
	}

	return bfd_peer_minimum_ttl_magic(self, vty, argc, argv, no, ttl, ttl_str);
}

/* no_bfd_peer_minimum_ttl => "no minimum-ttl" */
DEFUN_CMD_FUNC_DECL(no_bfd_peer_minimum_ttl)
#define funcdecl_no_bfd_peer_minimum_ttl static int no_bfd_peer_minimum_ttl_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_bfd_peer_minimum_ttl;
DEFUN_CMD_FUNC_TEXT(no_bfd_peer_minimum_ttl)
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

	return no_bfd_peer_minimum_ttl_magic(self, vty, argc, argv);
}

/* bfd_peer_mult => "detect-multiplier (2-255)$multiplier" */
DEFUN_CMD_FUNC_DECL(bfd_peer_mult)
#define funcdecl_bfd_peer_mult static int bfd_peer_mult_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long multiplier,\
	const char * multiplier_str __attribute__ ((unused)))
funcdecl_bfd_peer_mult;
DEFUN_CMD_FUNC_TEXT(bfd_peer_mult)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long multiplier = 0;
	const char *multiplier_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "multiplier")) {
			multiplier_str = argv[_i]->arg;
			char *_end;
			multiplier = strtol(argv[_i]->arg, &_end, 10);
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
	if (!multiplier_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "multiplier_str");
		return CMD_WARNING;
	}

	return bfd_peer_mult_magic(self, vty, argc, argv, multiplier, multiplier_str);
}

/* bfd_peer_rx => "receive-interval (10-60000)$interval" */
DEFUN_CMD_FUNC_DECL(bfd_peer_rx)
#define funcdecl_bfd_peer_rx static int bfd_peer_rx_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_bfd_peer_rx;
DEFUN_CMD_FUNC_TEXT(bfd_peer_rx)
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

	return bfd_peer_rx_magic(self, vty, argc, argv, interval, interval_str);
}

/* bfd_peer_tx => "transmit-interval (10-60000)$interval" */
DEFUN_CMD_FUNC_DECL(bfd_peer_tx)
#define funcdecl_bfd_peer_tx static int bfd_peer_tx_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_bfd_peer_tx;
DEFUN_CMD_FUNC_TEXT(bfd_peer_tx)
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

	return bfd_peer_tx_magic(self, vty, argc, argv, interval, interval_str);
}

/* bfd_peer_echo => "[no] echo-mode" */
DEFUN_CMD_FUNC_DECL(bfd_peer_echo)
#define funcdecl_bfd_peer_echo static int bfd_peer_echo_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_bfd_peer_echo;
DEFUN_CMD_FUNC_TEXT(bfd_peer_echo)
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

	return bfd_peer_echo_magic(self, vty, argc, argv, no);
}

/* bfd_peer_echo_interval => "echo-interval (10-60000)$interval" */
DEFUN_CMD_FUNC_DECL(bfd_peer_echo_interval)
#define funcdecl_bfd_peer_echo_interval static int bfd_peer_echo_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_bfd_peer_echo_interval;
DEFUN_CMD_FUNC_TEXT(bfd_peer_echo_interval)
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

	return bfd_peer_echo_interval_magic(self, vty, argc, argv, interval, interval_str);
}

/* bfd_peer_echo_transmit_interval => "echo transmit-interval (10-60000)$interval" */
DEFUN_CMD_FUNC_DECL(bfd_peer_echo_transmit_interval)
#define funcdecl_bfd_peer_echo_transmit_interval static int bfd_peer_echo_transmit_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_bfd_peer_echo_transmit_interval;
DEFUN_CMD_FUNC_TEXT(bfd_peer_echo_transmit_interval)
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

	return bfd_peer_echo_transmit_interval_magic(self, vty, argc, argv, interval, interval_str);
}

/* bfd_peer_echo_receive_interval => "echo receive-interval <disabled$disabled|(10-60000)$interval>" */
DEFUN_CMD_FUNC_DECL(bfd_peer_echo_receive_interval)
#define funcdecl_bfd_peer_echo_receive_interval static int bfd_peer_echo_receive_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * disabled,\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_bfd_peer_echo_receive_interval;
DEFUN_CMD_FUNC_TEXT(bfd_peer_echo_receive_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *disabled = NULL;
	long interval = 0;
	const char *interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "disabled")) {
			disabled = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return bfd_peer_echo_receive_interval_magic(self, vty, argc, argv, disabled, interval, interval_str);
}

/* bfd_profile => "profile BFDPROF$name" */
DEFUN_CMD_FUNC_DECL(bfd_profile)
#define funcdecl_bfd_profile static int bfd_profile_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_bfd_profile;
DEFUN_CMD_FUNC_TEXT(bfd_profile)
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

	return bfd_profile_magic(self, vty, argc, argv, name);
}

/* no_bfd_profile => "no profile BFDPROF$name" */
DEFUN_CMD_FUNC_DECL(no_bfd_profile)
#define funcdecl_no_bfd_profile static int no_bfd_profile_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_no_bfd_profile;
DEFUN_CMD_FUNC_TEXT(no_bfd_profile)
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

	return no_bfd_profile_magic(self, vty, argc, argv, name);
}

/* bfd_peer_profile => "[no] profile BFDPROF$pname" */
DEFUN_CMD_FUNC_DECL(bfd_peer_profile)
#define funcdecl_bfd_peer_profile static int bfd_peer_profile_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * pname)
funcdecl_bfd_peer_profile;
DEFUN_CMD_FUNC_TEXT(bfd_peer_profile)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *pname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "pname")) {
			pname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!pname) {
		vty_out(vty, "Internal CLI error [%s]\n", "pname");
		return CMD_WARNING;
	}

	return bfd_peer_profile_magic(self, vty, argc, argv, no, pname);
}

