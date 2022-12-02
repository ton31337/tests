#if defined(HAVE_RTADV)
/* show_ipv6_nd_ra_if => "show ipv6 nd ra-interfaces [vrf<NAME$vrf_name|all$vrf_all>]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_nd_ra_if)
#define funcdecl_show_ipv6_nd_ra_if static int show_ipv6_nd_ra_if_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * vrf_all)
funcdecl_show_ipv6_nd_ra_if;
DEFUN_CMD_FUNC_TEXT(show_ipv6_nd_ra_if)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	const char *vrf_all = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_all")) {
			vrf_all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_nd_ra_if_magic(self, vty, argc, argv, vrf_name, vrf_all);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_ra_hop_limit => "ipv6 nd ra-hop-limit (0-255)$hopcount" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_ra_hop_limit)
#define funcdecl_ipv6_nd_ra_hop_limit static int ipv6_nd_ra_hop_limit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long hopcount,\
	const char * hopcount_str __attribute__ ((unused)))
funcdecl_ipv6_nd_ra_hop_limit;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_ra_hop_limit)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long hopcount = 0;
	const char *hopcount_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hopcount")) {
			hopcount_str = argv[_i]->arg;
			char *_end;
			hopcount = strtol(argv[_i]->arg, &_end, 10);
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
	if (!hopcount_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "hopcount_str");
		return CMD_WARNING;
	}

	return ipv6_nd_ra_hop_limit_magic(self, vty, argc, argv, hopcount, hopcount_str);
}
#endif

#if defined(HAVE_RTADV)
/* no_ipv6_nd_ra_hop_limit => "no ipv6 nd ra-hop-limit [(0-255)]" */
DEFUN_CMD_FUNC_DECL(no_ipv6_nd_ra_hop_limit)
#define funcdecl_no_ipv6_nd_ra_hop_limit static int no_ipv6_nd_ra_hop_limit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long ra_hop_limit,\
	const char * ra_hop_limit_str __attribute__ ((unused)))
funcdecl_no_ipv6_nd_ra_hop_limit;
DEFUN_CMD_FUNC_TEXT(no_ipv6_nd_ra_hop_limit)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long ra_hop_limit = 0;
	const char *ra_hop_limit_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ra_hop_limit")) {
			ra_hop_limit_str = argv[_i]->arg;
			char *_end;
			ra_hop_limit = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ipv6_nd_ra_hop_limit_magic(self, vty, argc, argv, ra_hop_limit, ra_hop_limit_str);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_ra_retrans_interval => "ipv6 nd ra-retrans-interval (0-4294967295)$interval" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_ra_retrans_interval)
#define funcdecl_ipv6_nd_ra_retrans_interval static int ipv6_nd_ra_retrans_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_ipv6_nd_ra_retrans_interval;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_ra_retrans_interval)
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

	return ipv6_nd_ra_retrans_interval_magic(self, vty, argc, argv, interval, interval_str);
}
#endif

#if defined(HAVE_RTADV)
/* no_ipv6_nd_ra_retrans_interval => "no ipv6 nd ra-retrans-interval [(0-4294967295)]" */
DEFUN_CMD_FUNC_DECL(no_ipv6_nd_ra_retrans_interval)
#define funcdecl_no_ipv6_nd_ra_retrans_interval static int no_ipv6_nd_ra_retrans_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long ra_retrans_interval,\
	const char * ra_retrans_interval_str __attribute__ ((unused)))
funcdecl_no_ipv6_nd_ra_retrans_interval;
DEFUN_CMD_FUNC_TEXT(no_ipv6_nd_ra_retrans_interval)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long ra_retrans_interval = 0;
	const char *ra_retrans_interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ra_retrans_interval")) {
			ra_retrans_interval_str = argv[_i]->arg;
			char *_end;
			ra_retrans_interval = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ipv6_nd_ra_retrans_interval_magic(self, vty, argc, argv, ra_retrans_interval, ra_retrans_interval_str);
}
#endif

