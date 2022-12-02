/* watch_redistribute => "sharp watch [vrf NAME$vrf_name] redistribute <kernel|connected|static|rip|ripng|ospf|ospf6|isis|bgp|eigrp|nhrp|table|vnc|babel|openfabric>" */
DEFUN_CMD_FUNC_DECL(watch_redistribute)
#define funcdecl_watch_redistribute static int watch_redistribute_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name)
funcdecl_watch_redistribute;
DEFUN_CMD_FUNC_TEXT(watch_redistribute)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return watch_redistribute_magic(self, vty, argc, argv, vrf_name);
}

/* watch_nexthop_v6 => "sharp watch [vrf NAME$vrf_name] <nexthop$n X:X::X:X$nhop|import$import X:X::X:X/M$inhop>  [connected$connected]" */
DEFUN_CMD_FUNC_DECL(watch_nexthop_v6)
#define funcdecl_watch_nexthop_v6 static int watch_nexthop_v6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * n,\
	struct in6_addr nhop,\
	const char * nhop_str __attribute__ ((unused)),\
	const char * import,\
	const struct prefix_ipv6 * inhop,\
	const char * inhop_str __attribute__ ((unused)),\
	const char * connected)
funcdecl_watch_nexthop_v6;
DEFUN_CMD_FUNC_TEXT(watch_nexthop_v6)
{
#if 6 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	const char *n = NULL;
	struct in6_addr nhop = {};
	const char *nhop_str = NULL;
	const char *import = NULL;
	struct prefix_ipv6 inhop = { };
	const char *inhop_str = NULL;
	const char *connected = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "n")) {
			n = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "nhop")) {
			nhop_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &nhop);
		}
		if (!strcmp(argv[_i]->varname, "import")) {
			import = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "inhop")) {
			inhop_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &inhop);
		}
		if (!strcmp(argv[_i]->varname, "connected")) {
			connected = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return watch_nexthop_v6_magic(self, vty, argc, argv, vrf_name, n, nhop, nhop_str, import, &inhop, inhop_str, connected);
}

/* watch_nexthop_v4 => "sharp watch [vrf NAME$vrf_name] <nexthop$n A.B.C.D$nhop|import$import A.B.C.D/M$inhop> [connected$connected]" */
DEFUN_CMD_FUNC_DECL(watch_nexthop_v4)
#define funcdecl_watch_nexthop_v4 static int watch_nexthop_v4_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * n,\
	struct in_addr nhop,\
	const char * nhop_str __attribute__ ((unused)),\
	const char * import,\
	const struct prefix_ipv4 * inhop,\
	const char * inhop_str __attribute__ ((unused)),\
	const char * connected)
funcdecl_watch_nexthop_v4;
DEFUN_CMD_FUNC_TEXT(watch_nexthop_v4)
{
#if 6 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	const char *n = NULL;
	struct in_addr nhop = { INADDR_ANY };
	const char *nhop_str = NULL;
	const char *import = NULL;
	struct prefix_ipv4 inhop = { };
	const char *inhop_str = NULL;
	const char *connected = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "n")) {
			n = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "nhop")) {
			nhop_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &nhop);
		}
		if (!strcmp(argv[_i]->varname, "import")) {
			import = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "inhop")) {
			inhop_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &inhop);
		}
		if (!strcmp(argv[_i]->varname, "connected")) {
			connected = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return watch_nexthop_v4_magic(self, vty, argc, argv, vrf_name, n, nhop, nhop_str, import, &inhop, inhop_str, connected);
}

/* sharp_nht_data_dump => "sharp data nexthop" */
DEFUN_CMD_FUNC_DECL(sharp_nht_data_dump)
#define funcdecl_sharp_nht_data_dump static int sharp_nht_data_dump_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_sharp_nht_data_dump;
DEFUN_CMD_FUNC_TEXT(sharp_nht_data_dump)
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

	return sharp_nht_data_dump_magic(self, vty, argc, argv);
}

/* install_routes_data_dump => "sharp data route" */
DEFUN_CMD_FUNC_DECL(install_routes_data_dump)
#define funcdecl_install_routes_data_dump static int install_routes_data_dump_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_install_routes_data_dump;
DEFUN_CMD_FUNC_TEXT(install_routes_data_dump)
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

	return install_routes_data_dump_magic(self, vty, argc, argv);
}

/* install_routes => "sharp install routes [vrf NAME$vrf_name]	  <A.B.C.D$start4|X:X::X:X$start6>	  <nexthop <A.B.C.D$nexthop4|X:X::X:X$nexthop6>|	   nexthop-group NHGNAME$nexthop_group>	  [backup$backup <A.B.C.D$backup_nexthop4|X:X::X:X$backup_nexthop6>] 	  (1-1000000)$routes [instance (0-255)$instance] [repeat (2-1000)$rpt] [opaque WORD]" */
DEFUN_CMD_FUNC_DECL(install_routes)
#define funcdecl_install_routes static int install_routes_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	struct in_addr start4,\
	const char * start4_str __attribute__ ((unused)),\
	struct in6_addr start6,\
	const char * start6_str __attribute__ ((unused)),\
	struct in_addr nexthop4,\
	const char * nexthop4_str __attribute__ ((unused)),\
	struct in6_addr nexthop6,\
	const char * nexthop6_str __attribute__ ((unused)),\
	const char * nexthop_group,\
	const char * backup,\
	struct in_addr backup_nexthop4,\
	const char * backup_nexthop4_str __attribute__ ((unused)),\
	struct in6_addr backup_nexthop6,\
	const char * backup_nexthop6_str __attribute__ ((unused)),\
	long routes,\
	const char * routes_str __attribute__ ((unused)),\
	long instance,\
	const char * instance_str __attribute__ ((unused)),\
	long rpt,\
	const char * rpt_str __attribute__ ((unused)),\
	const char * opaque)
funcdecl_install_routes;
DEFUN_CMD_FUNC_TEXT(install_routes)
{
#if 13 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	struct in_addr start4 = { INADDR_ANY };
	const char *start4_str = NULL;
	struct in6_addr start6 = {};
	const char *start6_str = NULL;
	struct in_addr nexthop4 = { INADDR_ANY };
	const char *nexthop4_str = NULL;
	struct in6_addr nexthop6 = {};
	const char *nexthop6_str = NULL;
	const char *nexthop_group = NULL;
	const char *backup = NULL;
	struct in_addr backup_nexthop4 = { INADDR_ANY };
	const char *backup_nexthop4_str = NULL;
	struct in6_addr backup_nexthop6 = {};
	const char *backup_nexthop6_str = NULL;
	long routes = 0;
	const char *routes_str = NULL;
	long instance = 0;
	const char *instance_str = NULL;
	long rpt = 0;
	const char *rpt_str = NULL;
	const char *opaque = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "start4")) {
			start4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &start4);
		}
		if (!strcmp(argv[_i]->varname, "start6")) {
			start6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &start6);
		}
		if (!strcmp(argv[_i]->varname, "nexthop4")) {
			nexthop4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &nexthop4);
		}
		if (!strcmp(argv[_i]->varname, "nexthop6")) {
			nexthop6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &nexthop6);
		}
		if (!strcmp(argv[_i]->varname, "nexthop_group")) {
			nexthop_group = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "backup")) {
			backup = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "backup_nexthop4")) {
			backup_nexthop4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &backup_nexthop4);
		}
		if (!strcmp(argv[_i]->varname, "backup_nexthop6")) {
			backup_nexthop6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &backup_nexthop6);
		}
		if (!strcmp(argv[_i]->varname, "routes")) {
			routes_str = argv[_i]->arg;
			char *_end;
			routes = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "instance")) {
			instance_str = argv[_i]->arg;
			char *_end;
			instance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "rpt")) {
			rpt_str = argv[_i]->arg;
			char *_end;
			rpt = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "opaque")) {
			opaque = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!routes_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "routes_str");
		return CMD_WARNING;
	}

	return install_routes_magic(self, vty, argc, argv, vrf_name, start4, start4_str, start6, start6_str, nexthop4, nexthop4_str, nexthop6, nexthop6_str, nexthop_group, backup, backup_nexthop4, backup_nexthop4_str, backup_nexthop6, backup_nexthop6_str, routes, routes_str, instance, instance_str, rpt, rpt_str, opaque);
}

/* install_seg6_routes => "sharp install seg6-routes [vrf NAME$vrf_name]	  <A.B.C.D$start4|X:X::X:X$start6>	  nexthop-seg6 X:X::X:X$seg6_nh6 encap X:X::X:X$seg6_seg	  (1-1000000)$routes [repeat (2-1000)$rpt]" */
DEFUN_CMD_FUNC_DECL(install_seg6_routes)
#define funcdecl_install_seg6_routes static int install_seg6_routes_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	struct in_addr start4,\
	const char * start4_str __attribute__ ((unused)),\
	struct in6_addr start6,\
	const char * start6_str __attribute__ ((unused)),\
	struct in6_addr seg6_nh6,\
	const char * seg6_nh6_str __attribute__ ((unused)),\
	struct in6_addr seg6_seg,\
	const char * seg6_seg_str __attribute__ ((unused)),\
	long routes,\
	const char * routes_str __attribute__ ((unused)),\
	long rpt,\
	const char * rpt_str __attribute__ ((unused)))
funcdecl_install_seg6_routes;
DEFUN_CMD_FUNC_TEXT(install_seg6_routes)
{
#if 7 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	struct in_addr start4 = { INADDR_ANY };
	const char *start4_str = NULL;
	struct in6_addr start6 = {};
	const char *start6_str = NULL;
	struct in6_addr seg6_nh6 = {};
	const char *seg6_nh6_str = NULL;
	struct in6_addr seg6_seg = {};
	const char *seg6_seg_str = NULL;
	long routes = 0;
	const char *routes_str = NULL;
	long rpt = 0;
	const char *rpt_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "start4")) {
			start4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &start4);
		}
		if (!strcmp(argv[_i]->varname, "start6")) {
			start6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &start6);
		}
		if (!strcmp(argv[_i]->varname, "seg6_nh6")) {
			seg6_nh6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &seg6_nh6);
		}
		if (!strcmp(argv[_i]->varname, "seg6_seg")) {
			seg6_seg_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &seg6_seg);
		}
		if (!strcmp(argv[_i]->varname, "routes")) {
			routes_str = argv[_i]->arg;
			char *_end;
			routes = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "rpt")) {
			rpt_str = argv[_i]->arg;
			char *_end;
			rpt = strtol(argv[_i]->arg, &_end, 10);
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
	if (!seg6_nh6_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "seg6_nh6_str");
		return CMD_WARNING;
	}
	if (!seg6_seg_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "seg6_seg_str");
		return CMD_WARNING;
	}
	if (!routes_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "routes_str");
		return CMD_WARNING;
	}

	return install_seg6_routes_magic(self, vty, argc, argv, vrf_name, start4, start4_str, start6, start6_str, seg6_nh6, seg6_nh6_str, seg6_seg, seg6_seg_str, routes, routes_str, rpt, rpt_str);
}

/* install_seg6local_routes => "sharp install seg6local-routes [vrf NAME$vrf_name]	  X:X::X:X$start6	  nexthop-seg6local NAME$seg6l_oif	     <End$seg6l_end|	      End_X$seg6l_endx X:X::X:X$seg6l_endx_nh6|	      End_T$seg6l_endt (1-4294967295)$seg6l_endt_table|	      End_DX4$seg6l_enddx4 A.B.C.D$seg6l_enddx4_nh4|	      End_DT6$seg6l_enddt6 (1-4294967295)$seg6l_enddt6_table|	      End_DT4$seg6l_enddt4 (1-4294967295)$seg6l_enddt4_table>	  (1-1000000)$routes [repeat (2-1000)$rpt]" */
DEFUN_CMD_FUNC_DECL(install_seg6local_routes)
#define funcdecl_install_seg6local_routes static int install_seg6local_routes_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	struct in6_addr start6,\
	const char * start6_str __attribute__ ((unused)),\
	const char * seg6l_oif,\
	const char * seg6l_end,\
	const char * seg6l_endx,\
	struct in6_addr seg6l_endx_nh6,\
	const char * seg6l_endx_nh6_str __attribute__ ((unused)),\
	const char * seg6l_endt,\
	long seg6l_endt_table,\
	const char * seg6l_endt_table_str __attribute__ ((unused)),\
	const char * seg6l_enddx4,\
	struct in_addr seg6l_enddx4_nh4,\
	const char * seg6l_enddx4_nh4_str __attribute__ ((unused)),\
	const char * seg6l_enddt6,\
	long seg6l_enddt6_table,\
	const char * seg6l_enddt6_table_str __attribute__ ((unused)),\
	const char * seg6l_enddt4,\
	long seg6l_enddt4_table,\
	const char * seg6l_enddt4_table_str __attribute__ ((unused)),\
	long routes,\
	const char * routes_str __attribute__ ((unused)),\
	long rpt,\
	const char * rpt_str __attribute__ ((unused)))
funcdecl_install_seg6local_routes;
DEFUN_CMD_FUNC_TEXT(install_seg6local_routes)
{
#if 16 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	struct in6_addr start6 = {};
	const char *start6_str = NULL;
	const char *seg6l_oif = NULL;
	const char *seg6l_end = NULL;
	const char *seg6l_endx = NULL;
	struct in6_addr seg6l_endx_nh6 = {};
	const char *seg6l_endx_nh6_str = NULL;
	const char *seg6l_endt = NULL;
	long seg6l_endt_table = 0;
	const char *seg6l_endt_table_str = NULL;
	const char *seg6l_enddx4 = NULL;
	struct in_addr seg6l_enddx4_nh4 = { INADDR_ANY };
	const char *seg6l_enddx4_nh4_str = NULL;
	const char *seg6l_enddt6 = NULL;
	long seg6l_enddt6_table = 0;
	const char *seg6l_enddt6_table_str = NULL;
	const char *seg6l_enddt4 = NULL;
	long seg6l_enddt4_table = 0;
	const char *seg6l_enddt4_table_str = NULL;
	long routes = 0;
	const char *routes_str = NULL;
	long rpt = 0;
	const char *rpt_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "start6")) {
			start6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &start6);
		}
		if (!strcmp(argv[_i]->varname, "seg6l_oif")) {
			seg6l_oif = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "seg6l_end")) {
			seg6l_end = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "seg6l_endx")) {
			seg6l_endx = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "seg6l_endx_nh6")) {
			seg6l_endx_nh6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &seg6l_endx_nh6);
		}
		if (!strcmp(argv[_i]->varname, "seg6l_endt")) {
			seg6l_endt = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "seg6l_endt_table")) {
			seg6l_endt_table_str = argv[_i]->arg;
			char *_end;
			seg6l_endt_table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "seg6l_enddx4")) {
			seg6l_enddx4 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "seg6l_enddx4_nh4")) {
			seg6l_enddx4_nh4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &seg6l_enddx4_nh4);
		}
		if (!strcmp(argv[_i]->varname, "seg6l_enddt6")) {
			seg6l_enddt6 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "seg6l_enddt6_table")) {
			seg6l_enddt6_table_str = argv[_i]->arg;
			char *_end;
			seg6l_enddt6_table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "seg6l_enddt4")) {
			seg6l_enddt4 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "seg6l_enddt4_table")) {
			seg6l_enddt4_table_str = argv[_i]->arg;
			char *_end;
			seg6l_enddt4_table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "routes")) {
			routes_str = argv[_i]->arg;
			char *_end;
			routes = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "rpt")) {
			rpt_str = argv[_i]->arg;
			char *_end;
			rpt = strtol(argv[_i]->arg, &_end, 10);
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
	if (!start6_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "start6_str");
		return CMD_WARNING;
	}
	if (!seg6l_oif) {
		vty_out(vty, "Internal CLI error [%s]\n", "seg6l_oif");
		return CMD_WARNING;
	}
	if (!routes_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "routes_str");
		return CMD_WARNING;
	}

	return install_seg6local_routes_magic(self, vty, argc, argv, vrf_name, start6, start6_str, seg6l_oif, seg6l_end, seg6l_endx, seg6l_endx_nh6, seg6l_endx_nh6_str, seg6l_endt, seg6l_endt_table, seg6l_endt_table_str, seg6l_enddx4, seg6l_enddx4_nh4, seg6l_enddx4_nh4_str, seg6l_enddt6, seg6l_enddt6_table, seg6l_enddt6_table_str, seg6l_enddt4, seg6l_enddt4_table, seg6l_enddt4_table_str, routes, routes_str, rpt, rpt_str);
}

/* vrf_label => "sharp label <ip$ipv4|ipv6$ipv6> vrf NAME$vrf_name label (0-100000)$label" */
DEFUN_CMD_FUNC_DECL(vrf_label)
#define funcdecl_vrf_label static int vrf_label_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ipv4,\
	const char * ipv6,\
	const char * vrf_name,\
	long label,\
	const char * label_str __attribute__ ((unused)))
funcdecl_vrf_label;
DEFUN_CMD_FUNC_TEXT(vrf_label)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ipv4 = NULL;
	const char *ipv6 = NULL;
	const char *vrf_name = NULL;
	long label = 0;
	const char *label_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ipv4")) {
			ipv4 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ipv6")) {
			ipv6 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label_str = argv[_i]->arg;
			char *_end;
			label = strtol(argv[_i]->arg, &_end, 10);
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
	if (!vrf_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrf_name");
		return CMD_WARNING;
	}
	if (!label_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "label_str");
		return CMD_WARNING;
	}

	return vrf_label_magic(self, vty, argc, argv, ipv4, ipv6, vrf_name, label, label_str);
}

/* remove_routes => "sharp remove routes [vrf NAME$vrf_name] <A.B.C.D$start4|X:X::X:X$start6> (1-1000000)$routes [instance (0-255)$instance]" */
DEFUN_CMD_FUNC_DECL(remove_routes)
#define funcdecl_remove_routes static int remove_routes_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	struct in_addr start4,\
	const char * start4_str __attribute__ ((unused)),\
	struct in6_addr start6,\
	const char * start6_str __attribute__ ((unused)),\
	long routes,\
	const char * routes_str __attribute__ ((unused)),\
	long instance,\
	const char * instance_str __attribute__ ((unused)))
funcdecl_remove_routes;
DEFUN_CMD_FUNC_TEXT(remove_routes)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	struct in_addr start4 = { INADDR_ANY };
	const char *start4_str = NULL;
	struct in6_addr start6 = {};
	const char *start6_str = NULL;
	long routes = 0;
	const char *routes_str = NULL;
	long instance = 0;
	const char *instance_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "start4")) {
			start4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &start4);
		}
		if (!strcmp(argv[_i]->varname, "start6")) {
			start6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &start6);
		}
		if (!strcmp(argv[_i]->varname, "routes")) {
			routes_str = argv[_i]->arg;
			char *_end;
			routes = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "instance")) {
			instance_str = argv[_i]->arg;
			char *_end;
			instance = strtol(argv[_i]->arg, &_end, 10);
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
	if (!routes_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "routes_str");
		return CMD_WARNING;
	}

	return remove_routes_magic(self, vty, argc, argv, vrf_name, start4, start4_str, start6, start6_str, routes, routes_str, instance, instance_str);
}

/* sharp_lsp_prefix_v4 => "sharp lsp [update]$update (0-100000)$inlabel        nexthop-group NHGNAME$nhgname        [prefix A.B.C.D/M$pfx       <kernel|connected|static|rip|ospf|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric>$type_str [instance (0-255)$instance]]" */
DEFUN_CMD_FUNC_DECL(sharp_lsp_prefix_v4)
#define funcdecl_sharp_lsp_prefix_v4 static int sharp_lsp_prefix_v4_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * update,\
	long inlabel,\
	const char * inlabel_str __attribute__ ((unused)),\
	const char * nhgname,\
	const struct prefix_ipv4 * pfx,\
	const char * pfx_str __attribute__ ((unused)),\
	const char * type_str,\
	long instance,\
	const char * instance_str __attribute__ ((unused)))
funcdecl_sharp_lsp_prefix_v4;
DEFUN_CMD_FUNC_TEXT(sharp_lsp_prefix_v4)
{
#if 6 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *update = NULL;
	long inlabel = 0;
	const char *inlabel_str = NULL;
	const char *nhgname = NULL;
	struct prefix_ipv4 pfx = { };
	const char *pfx_str = NULL;
	const char *type_str = NULL;
	long instance = 0;
	const char *instance_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "update")) {
			update = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "inlabel")) {
			inlabel_str = argv[_i]->arg;
			char *_end;
			inlabel = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "nhgname")) {
			nhgname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "pfx")) {
			pfx_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &pfx);
		}
		if (!strcmp(argv[_i]->varname, "type_str")) {
			type_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "instance")) {
			instance_str = argv[_i]->arg;
			char *_end;
			instance = strtol(argv[_i]->arg, &_end, 10);
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
	if (!inlabel_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "inlabel_str");
		return CMD_WARNING;
	}
	if (!nhgname) {
		vty_out(vty, "Internal CLI error [%s]\n", "nhgname");
		return CMD_WARNING;
	}

	return sharp_lsp_prefix_v4_magic(self, vty, argc, argv, update, inlabel, inlabel_str, nhgname, &pfx, pfx_str, type_str, instance, instance_str);
}

/* sharp_remove_lsp_prefix_v4 => "sharp remove lsp         (0-100000)$inlabel        [nexthop-group NHGNAME$nhgname]         [prefix A.B.C.D/M$pfx       <kernel|connected|static|rip|ospf|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric>$type_str [instance (0-255)$instance]]" */
DEFUN_CMD_FUNC_DECL(sharp_remove_lsp_prefix_v4)
#define funcdecl_sharp_remove_lsp_prefix_v4 static int sharp_remove_lsp_prefix_v4_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long inlabel,\
	const char * inlabel_str __attribute__ ((unused)),\
	const char * nhgname,\
	const struct prefix_ipv4 * pfx,\
	const char * pfx_str __attribute__ ((unused)),\
	const char * type_str,\
	long instance,\
	const char * instance_str __attribute__ ((unused)))
funcdecl_sharp_remove_lsp_prefix_v4;
DEFUN_CMD_FUNC_TEXT(sharp_remove_lsp_prefix_v4)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long inlabel = 0;
	const char *inlabel_str = NULL;
	const char *nhgname = NULL;
	struct prefix_ipv4 pfx = { };
	const char *pfx_str = NULL;
	const char *type_str = NULL;
	long instance = 0;
	const char *instance_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "inlabel")) {
			inlabel_str = argv[_i]->arg;
			char *_end;
			inlabel = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "nhgname")) {
			nhgname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "pfx")) {
			pfx_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &pfx);
		}
		if (!strcmp(argv[_i]->varname, "type_str")) {
			type_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "instance")) {
			instance_str = argv[_i]->arg;
			char *_end;
			instance = strtol(argv[_i]->arg, &_end, 10);
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
	if (!inlabel_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "inlabel_str");
		return CMD_WARNING;
	}

	return sharp_remove_lsp_prefix_v4_magic(self, vty, argc, argv, inlabel, inlabel_str, nhgname, &pfx, pfx_str, type_str, instance, instance_str);
}

/* logpump => "sharp logpump duration (1-60) frequency (1-1000000) burst (1-1000)" */
DEFUN_CMD_FUNC_DECL(logpump)
#define funcdecl_logpump static int logpump_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long duration,\
	const char * duration_str __attribute__ ((unused)),\
	long frequency,\
	const char * frequency_str __attribute__ ((unused)),\
	long burst,\
	const char * burst_str __attribute__ ((unused)))
funcdecl_logpump;
DEFUN_CMD_FUNC_TEXT(logpump)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long duration = 0;
	const char *duration_str = NULL;
	long frequency = 0;
	const char *frequency_str = NULL;
	long burst = 0;
	const char *burst_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "duration")) {
			duration_str = argv[_i]->arg;
			char *_end;
			duration = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "frequency")) {
			frequency_str = argv[_i]->arg;
			char *_end;
			frequency = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "burst")) {
			burst_str = argv[_i]->arg;
			char *_end;
			burst = strtol(argv[_i]->arg, &_end, 10);
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
	if (!duration_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "duration_str");
		return CMD_WARNING;
	}
	if (!frequency_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "frequency_str");
		return CMD_WARNING;
	}
	if (!burst_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "burst_str");
		return CMD_WARNING;
	}

	return logpump_magic(self, vty, argc, argv, duration, duration_str, frequency, frequency_str, burst, burst_str);
}

/* create_session => "sharp create session (1-1024)" */
DEFUN_CMD_FUNC_DECL(create_session)
#define funcdecl_create_session static int create_session_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long session,\
	const char * session_str __attribute__ ((unused)))
funcdecl_create_session;
DEFUN_CMD_FUNC_TEXT(create_session)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long session = 0;
	const char *session_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "session")) {
			session_str = argv[_i]->arg;
			char *_end;
			session = strtol(argv[_i]->arg, &_end, 10);
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
	if (!session_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "session_str");
		return CMD_WARNING;
	}

	return create_session_magic(self, vty, argc, argv, session, session_str);
}

/* remove_session => "sharp remove session (1-1024)" */
DEFUN_CMD_FUNC_DECL(remove_session)
#define funcdecl_remove_session static int remove_session_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long session,\
	const char * session_str __attribute__ ((unused)))
funcdecl_remove_session;
DEFUN_CMD_FUNC_TEXT(remove_session)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long session = 0;
	const char *session_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "session")) {
			session_str = argv[_i]->arg;
			char *_end;
			session = strtol(argv[_i]->arg, &_end, 10);
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
	if (!session_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "session_str");
		return CMD_WARNING;
	}

	return remove_session_magic(self, vty, argc, argv, session, session_str);
}

/* send_opaque => "sharp send opaque type (1-255) (1-1000)$count" */
DEFUN_CMD_FUNC_DECL(send_opaque)
#define funcdecl_send_opaque static int send_opaque_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long type,\
	const char * type_str __attribute__ ((unused)),\
	long count,\
	const char * count_str __attribute__ ((unused)))
funcdecl_send_opaque;
DEFUN_CMD_FUNC_TEXT(send_opaque)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long type = 0;
	const char *type_str = NULL;
	long count = 0;
	const char *count_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "type")) {
			type_str = argv[_i]->arg;
			char *_end;
			type = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "count")) {
			count_str = argv[_i]->arg;
			char *_end;
			count = strtol(argv[_i]->arg, &_end, 10);
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
	if (!type_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "type_str");
		return CMD_WARNING;
	}
	if (!count_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "count_str");
		return CMD_WARNING;
	}

	return send_opaque_magic(self, vty, argc, argv, type, type_str, count, count_str);
}

/* send_opaque_unicast => "sharp send opaque unicast type (1-255)        <kernel|connected|static|rip|ospf|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric>$proto_str         [{instance (0-1000) | session (1-1000)}] (1-1000)$count" */
DEFUN_CMD_FUNC_DECL(send_opaque_unicast)
#define funcdecl_send_opaque_unicast static int send_opaque_unicast_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long type,\
	const char * type_str __attribute__ ((unused)),\
	const char * proto_str,\
	long instance,\
	const char * instance_str __attribute__ ((unused)),\
	long session,\
	const char * session_str __attribute__ ((unused)),\
	long count,\
	const char * count_str __attribute__ ((unused)))
funcdecl_send_opaque_unicast;
DEFUN_CMD_FUNC_TEXT(send_opaque_unicast)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long type = 0;
	const char *type_str = NULL;
	const char *proto_str = NULL;
	long instance = 0;
	const char *instance_str = NULL;
	long session = 0;
	const char *session_str = NULL;
	long count = 0;
	const char *count_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "type")) {
			type_str = argv[_i]->arg;
			char *_end;
			type = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "proto_str")) {
			proto_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "instance")) {
			instance_str = argv[_i]->arg;
			char *_end;
			instance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "session")) {
			session_str = argv[_i]->arg;
			char *_end;
			session = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "count")) {
			count_str = argv[_i]->arg;
			char *_end;
			count = strtol(argv[_i]->arg, &_end, 10);
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
	if (!type_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "type_str");
		return CMD_WARNING;
	}
	if (!proto_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto_str");
		return CMD_WARNING;
	}
	if (!count_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "count_str");
		return CMD_WARNING;
	}

	return send_opaque_unicast_magic(self, vty, argc, argv, type, type_str, proto_str, instance, instance_str, session, session_str, count, count_str);
}

/* send_opaque_reg => "sharp send opaque <reg$reg | unreg>        <kernel|connected|static|rip|ospf|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric>$proto_str         [{instance (0-1000) | session (1-1000)}] type (1-1000)" */
DEFUN_CMD_FUNC_DECL(send_opaque_reg)
#define funcdecl_send_opaque_reg static int send_opaque_reg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * reg,\
	const char * proto_str,\
	long instance,\
	const char * instance_str __attribute__ ((unused)),\
	long session,\
	const char * session_str __attribute__ ((unused)),\
	long type,\
	const char * type_str __attribute__ ((unused)))
funcdecl_send_opaque_reg;
DEFUN_CMD_FUNC_TEXT(send_opaque_reg)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *reg = NULL;
	const char *proto_str = NULL;
	long instance = 0;
	const char *instance_str = NULL;
	long session = 0;
	const char *session_str = NULL;
	long type = 0;
	const char *type_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "reg")) {
			reg = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "proto_str")) {
			proto_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "instance")) {
			instance_str = argv[_i]->arg;
			char *_end;
			instance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "session")) {
			session_str = argv[_i]->arg;
			char *_end;
			session = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "type")) {
			type_str = argv[_i]->arg;
			char *_end;
			type = strtol(argv[_i]->arg, &_end, 10);
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
	if (!proto_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto_str");
		return CMD_WARNING;
	}
	if (!type_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "type_str");
		return CMD_WARNING;
	}

	return send_opaque_reg_magic(self, vty, argc, argv, reg, proto_str, instance, instance_str, session, session_str, type, type_str);
}

/* neigh_discover => "sharp neigh discover [vrf NAME$vrf_name] <A.B.C.D$dst4|X:X::X:X$dst6> IFNAME$ifname" */
DEFUN_CMD_FUNC_DECL(neigh_discover)
#define funcdecl_neigh_discover static int neigh_discover_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	struct in_addr dst4,\
	const char * dst4_str __attribute__ ((unused)),\
	struct in6_addr dst6,\
	const char * dst6_str __attribute__ ((unused)),\
	const char * ifname)
funcdecl_neigh_discover;
DEFUN_CMD_FUNC_TEXT(neigh_discover)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	struct in_addr dst4 = { INADDR_ANY };
	const char *dst4_str = NULL;
	struct in6_addr dst6 = {};
	const char *dst6_str = NULL;
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
		if (!strcmp(argv[_i]->varname, "dst4")) {
			dst4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &dst4);
		}
		if (!strcmp(argv[_i]->varname, "dst6")) {
			dst6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &dst6);
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
	if (!ifname) {
		vty_out(vty, "Internal CLI error [%s]\n", "ifname");
		return CMD_WARNING;
	}

	return neigh_discover_magic(self, vty, argc, argv, vrf_name, dst4, dst4_str, dst6, dst6_str, ifname);
}

/* import_te => "sharp import-te" */
DEFUN_CMD_FUNC_DECL(import_te)
#define funcdecl_import_te static int import_te_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_import_te;
DEFUN_CMD_FUNC_TEXT(import_te)
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

	return import_te_magic(self, vty, argc, argv);
}

/* sharp_srv6_manager_get_locator_chunk => "sharp srv6-manager get-locator-chunk NAME$locator_name" */
DEFUN_CMD_FUNC_DECL(sharp_srv6_manager_get_locator_chunk)
#define funcdecl_sharp_srv6_manager_get_locator_chunk static int sharp_srv6_manager_get_locator_chunk_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * locator_name)
funcdecl_sharp_srv6_manager_get_locator_chunk;
DEFUN_CMD_FUNC_TEXT(sharp_srv6_manager_get_locator_chunk)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *locator_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "locator_name")) {
			locator_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!locator_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "locator_name");
		return CMD_WARNING;
	}

	return sharp_srv6_manager_get_locator_chunk_magic(self, vty, argc, argv, locator_name);
}

/* sharp_srv6_manager_release_locator_chunk => "sharp srv6-manager release-locator-chunk NAME$locator_name" */
DEFUN_CMD_FUNC_DECL(sharp_srv6_manager_release_locator_chunk)
#define funcdecl_sharp_srv6_manager_release_locator_chunk static int sharp_srv6_manager_release_locator_chunk_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * locator_name)
funcdecl_sharp_srv6_manager_release_locator_chunk;
DEFUN_CMD_FUNC_TEXT(sharp_srv6_manager_release_locator_chunk)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *locator_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "locator_name")) {
			locator_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!locator_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "locator_name");
		return CMD_WARNING;
	}

	return sharp_srv6_manager_release_locator_chunk_magic(self, vty, argc, argv, locator_name);
}

/* show_sharp_segment_routing_srv6 => "show sharp segment-routing srv6 [json]" */
DEFUN_CMD_FUNC_DECL(show_sharp_segment_routing_srv6)
#define funcdecl_show_sharp_segment_routing_srv6 static int show_sharp_segment_routing_srv6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_sharp_segment_routing_srv6;
DEFUN_CMD_FUNC_TEXT(show_sharp_segment_routing_srv6)
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

	return show_sharp_segment_routing_srv6_magic(self, vty, argc, argv);
}

/* show_sharp_cspf => "show sharp cspf source <A.B.C.D$src4|X:X::X:X$src6>         destination <A.B.C.D$dst4|X:X::X:X$dst6>         <metric|te-metric|delay> (0-16777215)$cost         [rsv-bw (0-7)$cos BANDWIDTH$bw]" */
DEFUN_CMD_FUNC_DECL(show_sharp_cspf)
#define funcdecl_show_sharp_cspf static int show_sharp_cspf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr src4,\
	const char * src4_str __attribute__ ((unused)),\
	struct in6_addr src6,\
	const char * src6_str __attribute__ ((unused)),\
	struct in_addr dst4,\
	const char * dst4_str __attribute__ ((unused)),\
	struct in6_addr dst6,\
	const char * dst6_str __attribute__ ((unused)),\
	long cost,\
	const char * cost_str __attribute__ ((unused)),\
	long cos,\
	const char * cos_str __attribute__ ((unused)),\
	const char * bw)
funcdecl_show_sharp_cspf;
DEFUN_CMD_FUNC_TEXT(show_sharp_cspf)
{
#if 7 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr src4 = { INADDR_ANY };
	const char *src4_str = NULL;
	struct in6_addr src6 = {};
	const char *src6_str = NULL;
	struct in_addr dst4 = { INADDR_ANY };
	const char *dst4_str = NULL;
	struct in6_addr dst6 = {};
	const char *dst6_str = NULL;
	long cost = 0;
	const char *cost_str = NULL;
	long cos = 0;
	const char *cos_str = NULL;
	const char *bw = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "src4")) {
			src4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &src4);
		}
		if (!strcmp(argv[_i]->varname, "src6")) {
			src6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &src6);
		}
		if (!strcmp(argv[_i]->varname, "dst4")) {
			dst4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &dst4);
		}
		if (!strcmp(argv[_i]->varname, "dst6")) {
			dst6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &dst6);
		}
		if (!strcmp(argv[_i]->varname, "cost")) {
			cost_str = argv[_i]->arg;
			char *_end;
			cost = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "cos")) {
			cos_str = argv[_i]->arg;
			char *_end;
			cos = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "bw")) {
			bw = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!cost_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "cost_str");
		return CMD_WARNING;
	}

	return show_sharp_cspf_magic(self, vty, argc, argv, src4, src4_str, src6, src6_str, dst4, dst4_str, dst6, dst6_str, cost, cost_str, cos, cos_str, bw);
}

/* sharp_interface_protodown => "sharp interface IFNAME$ifname protodown" */
DEFUN_CMD_FUNC_DECL(sharp_interface_protodown)
#define funcdecl_sharp_interface_protodown static int sharp_interface_protodown_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ifname)
funcdecl_sharp_interface_protodown;
DEFUN_CMD_FUNC_TEXT(sharp_interface_protodown)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ifname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

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

	return sharp_interface_protodown_magic(self, vty, argc, argv, ifname);
}

/* no_sharp_interface_protodown => "no sharp interface IFNAME$ifname protodown" */
DEFUN_CMD_FUNC_DECL(no_sharp_interface_protodown)
#define funcdecl_no_sharp_interface_protodown static int no_sharp_interface_protodown_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ifname)
funcdecl_no_sharp_interface_protodown;
DEFUN_CMD_FUNC_TEXT(no_sharp_interface_protodown)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ifname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

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

	return no_sharp_interface_protodown_magic(self, vty, argc, argv, ifname);
}

