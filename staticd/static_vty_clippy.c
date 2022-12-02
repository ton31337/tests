/* ip_mroute_dist => "[no] ip mroute A.B.C.D/M$prefix <A.B.C.D$gate|INTERFACE$ifname> [(1-255)$distance]" */
DEFUN_CMD_FUNC_DECL(ip_mroute_dist)
#define funcdecl_ip_mroute_dist static int ip_mroute_dist_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv4 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	struct in_addr gate,\
	const char * gate_str __attribute__ ((unused)),\
	const char * ifname,\
	long distance,\
	const char * distance_str __attribute__ ((unused)))
funcdecl_ip_mroute_dist;
DEFUN_CMD_FUNC_TEXT(ip_mroute_dist)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv4 prefix = { };
	const char *prefix_str = NULL;
	struct in_addr gate = { INADDR_ANY };
	const char *gate_str = NULL;
	const char *ifname = NULL;
	long distance = 0;
	const char *distance_str = NULL;

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
		if (!strcmp(argv[_i]->varname, "gate")) {
			gate_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &gate);
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
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

	return ip_mroute_dist_magic(self, vty, argc, argv, no, &prefix, prefix_str, gate, gate_str, ifname, distance, distance_str);
}

/* ip_route_blackhole => "[no] ip route	<A.B.C.D/M$prefix|A.B.C.D$prefix A.B.C.D$mask>                        	<reject|blackhole>$flag                                               	[{                                                                    	  tag (1-4294967295)                                                  	  |(1-255)$distance                                                   	  |vrf NAME                                                           	  |label WORD                                                                   |table (1-4294967295)                                                         }]" */
DEFUN_CMD_FUNC_DECL(ip_route_blackhole)
#define funcdecl_ip_route_blackhole static int ip_route_blackhole_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * prefix,\
	struct in_addr mask,\
	const char * mask_str __attribute__ ((unused)),\
	const char * flag,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * vrf,\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)))
funcdecl_ip_route_blackhole;
DEFUN_CMD_FUNC_TEXT(ip_route_blackhole)
{
#if 9 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *prefix = NULL;
	struct in_addr mask = { INADDR_ANY };
	const char *mask_str = NULL;
	const char *flag = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *vrf = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;

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
			prefix = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mask")) {
			mask_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &mask);
		}
		if (!strcmp(argv[_i]->varname, "flag")) {
			flag = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
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
	if (!prefix) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix");
		return CMD_WARNING;
	}
	if (!flag) {
		vty_out(vty, "Internal CLI error [%s]\n", "flag");
		return CMD_WARNING;
	}

	return ip_route_blackhole_magic(self, vty, argc, argv, no, prefix, mask, mask_str, flag, tag, tag_str, distance, distance_str, vrf, label, table, table_str);
}

/* ip_route_blackhole_vrf => "[no] ip route	<A.B.C.D/M$prefix|A.B.C.D$prefix A.B.C.D$mask>                        	<reject|blackhole>$flag                                               	[{                                                                    	  tag (1-4294967295)                                                  	  |(1-255)$distance                                                   	  |label WORD                                                         	  |table (1-4294967295)                                                         }]" */
DEFUN_CMD_FUNC_DECL(ip_route_blackhole_vrf)
#define funcdecl_ip_route_blackhole_vrf static int ip_route_blackhole_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * prefix,\
	struct in_addr mask,\
	const char * mask_str __attribute__ ((unused)),\
	const char * flag,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)))
funcdecl_ip_route_blackhole_vrf;
DEFUN_CMD_FUNC_TEXT(ip_route_blackhole_vrf)
{
#if 8 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *prefix = NULL;
	struct in_addr mask = { INADDR_ANY };
	const char *mask_str = NULL;
	const char *flag = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;

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
			prefix = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mask")) {
			mask_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &mask);
		}
		if (!strcmp(argv[_i]->varname, "flag")) {
			flag = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
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
	if (!prefix) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix");
		return CMD_WARNING;
	}
	if (!flag) {
		vty_out(vty, "Internal CLI error [%s]\n", "flag");
		return CMD_WARNING;
	}

	return ip_route_blackhole_vrf_magic(self, vty, argc, argv, no, prefix, mask, mask_str, flag, tag, tag_str, distance, distance_str, label, table, table_str);
}

/* ip_route_address_interface => "[no] ip route	<A.B.C.D/M$prefix|A.B.C.D$prefix A.B.C.D$mask> 	A.B.C.D$gate                                   	<INTERFACE|Null0>$ifname                       	[{                                             	  tag (1-4294967295)                           	  |(1-255)$distance                            	  |vrf NAME                                    	  |label WORD                                  	  |table (1-4294967295)                        	  |nexthop-vrf NAME                            	  |onlink$onlink                               	  |color (1-4294967295)                                  }]" */
DEFUN_CMD_FUNC_DECL(ip_route_address_interface)
#define funcdecl_ip_route_address_interface static int ip_route_address_interface_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * prefix,\
	struct in_addr mask,\
	const char * mask_str __attribute__ ((unused)),\
	struct in_addr gate,\
	const char * gate_str __attribute__ ((unused)),\
	const char * ifname,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * vrf,\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)),\
	const char * nexthop_vrf,\
	const char * onlink,\
	long color,\
	const char * color_str __attribute__ ((unused)))
funcdecl_ip_route_address_interface;
DEFUN_CMD_FUNC_TEXT(ip_route_address_interface)
{
#if 13 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *prefix = NULL;
	struct in_addr mask = { INADDR_ANY };
	const char *mask_str = NULL;
	struct in_addr gate = { INADDR_ANY };
	const char *gate_str = NULL;
	const char *ifname = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *vrf = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;
	const char *nexthop_vrf = NULL;
	const char *onlink = NULL;
	long color = 0;
	const char *color_str = NULL;

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
			prefix = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mask")) {
			mask_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &mask);
		}
		if (!strcmp(argv[_i]->varname, "gate")) {
			gate_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &gate);
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "nexthop_vrf")) {
			nexthop_vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "onlink")) {
			onlink = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "color")) {
			color_str = argv[_i]->arg;
			char *_end;
			color = strtol(argv[_i]->arg, &_end, 10);
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
	if (!prefix) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix");
		return CMD_WARNING;
	}
	if (!gate_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "gate_str");
		return CMD_WARNING;
	}
	if (!ifname) {
		vty_out(vty, "Internal CLI error [%s]\n", "ifname");
		return CMD_WARNING;
	}

	return ip_route_address_interface_magic(self, vty, argc, argv, no, prefix, mask, mask_str, gate, gate_str, ifname, tag, tag_str, distance, distance_str, vrf, label, table, table_str, nexthop_vrf, onlink, color, color_str);
}

/* ip_route_address_interface_vrf => "[no] ip route	<A.B.C.D/M$prefix|A.B.C.D$prefix A.B.C.D$mask> 	A.B.C.D$gate                                   	<INTERFACE|Null0>$ifname                       	[{                                             	  tag (1-4294967295)                           	  |(1-255)$distance                            	  |label WORD                                  	  |table (1-4294967295)                        	  |nexthop-vrf NAME                            	  |onlink$onlink                               	  |color (1-4294967295)                        	  }]" */
DEFUN_CMD_FUNC_DECL(ip_route_address_interface_vrf)
#define funcdecl_ip_route_address_interface_vrf static int ip_route_address_interface_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * prefix,\
	struct in_addr mask,\
	const char * mask_str __attribute__ ((unused)),\
	struct in_addr gate,\
	const char * gate_str __attribute__ ((unused)),\
	const char * ifname,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)),\
	const char * nexthop_vrf,\
	const char * onlink,\
	long color,\
	const char * color_str __attribute__ ((unused)))
funcdecl_ip_route_address_interface_vrf;
DEFUN_CMD_FUNC_TEXT(ip_route_address_interface_vrf)
{
#if 12 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *prefix = NULL;
	struct in_addr mask = { INADDR_ANY };
	const char *mask_str = NULL;
	struct in_addr gate = { INADDR_ANY };
	const char *gate_str = NULL;
	const char *ifname = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;
	const char *nexthop_vrf = NULL;
	const char *onlink = NULL;
	long color = 0;
	const char *color_str = NULL;

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
			prefix = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mask")) {
			mask_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &mask);
		}
		if (!strcmp(argv[_i]->varname, "gate")) {
			gate_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &gate);
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "nexthop_vrf")) {
			nexthop_vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "onlink")) {
			onlink = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "color")) {
			color_str = argv[_i]->arg;
			char *_end;
			color = strtol(argv[_i]->arg, &_end, 10);
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
	if (!prefix) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix");
		return CMD_WARNING;
	}
	if (!gate_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "gate_str");
		return CMD_WARNING;
	}
	if (!ifname) {
		vty_out(vty, "Internal CLI error [%s]\n", "ifname");
		return CMD_WARNING;
	}

	return ip_route_address_interface_vrf_magic(self, vty, argc, argv, no, prefix, mask, mask_str, gate, gate_str, ifname, tag, tag_str, distance, distance_str, label, table, table_str, nexthop_vrf, onlink, color, color_str);
}

/* ip_route => "[no] ip route	<A.B.C.D/M$prefix|A.B.C.D$prefix A.B.C.D$mask> 	<A.B.C.D$gate|<INTERFACE|Null0>$ifname>        	[{                                             	  tag (1-4294967295)                           	  |(1-255)$distance                            	  |vrf NAME                                    	  |label WORD                                  	  |table (1-4294967295)                        	  |nexthop-vrf NAME                            	  |color (1-4294967295)                                  }]" */
DEFUN_CMD_FUNC_DECL(ip_route)
#define funcdecl_ip_route static int ip_route_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * prefix,\
	struct in_addr mask,\
	const char * mask_str __attribute__ ((unused)),\
	struct in_addr gate,\
	const char * gate_str __attribute__ ((unused)),\
	const char * ifname,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * vrf,\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)),\
	const char * nexthop_vrf,\
	long color,\
	const char * color_str __attribute__ ((unused)))
funcdecl_ip_route;
DEFUN_CMD_FUNC_TEXT(ip_route)
{
#if 12 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *prefix = NULL;
	struct in_addr mask = { INADDR_ANY };
	const char *mask_str = NULL;
	struct in_addr gate = { INADDR_ANY };
	const char *gate_str = NULL;
	const char *ifname = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *vrf = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;
	const char *nexthop_vrf = NULL;
	long color = 0;
	const char *color_str = NULL;

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
			prefix = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mask")) {
			mask_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &mask);
		}
		if (!strcmp(argv[_i]->varname, "gate")) {
			gate_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &gate);
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "nexthop_vrf")) {
			nexthop_vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "color")) {
			color_str = argv[_i]->arg;
			char *_end;
			color = strtol(argv[_i]->arg, &_end, 10);
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
	if (!prefix) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix");
		return CMD_WARNING;
	}

	return ip_route_magic(self, vty, argc, argv, no, prefix, mask, mask_str, gate, gate_str, ifname, tag, tag_str, distance, distance_str, vrf, label, table, table_str, nexthop_vrf, color, color_str);
}

/* ip_route_vrf => "[no] ip route	<A.B.C.D/M$prefix|A.B.C.D$prefix A.B.C.D$mask> 	<A.B.C.D$gate|<INTERFACE|Null0>$ifname>        	[{                                             	  tag (1-4294967295)                           	  |(1-255)$distance                            	  |label WORD                                  	  |table (1-4294967295)                        	  |nexthop-vrf NAME                            	  |color (1-4294967295)                                  }]" */
DEFUN_CMD_FUNC_DECL(ip_route_vrf)
#define funcdecl_ip_route_vrf static int ip_route_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * prefix,\
	struct in_addr mask,\
	const char * mask_str __attribute__ ((unused)),\
	struct in_addr gate,\
	const char * gate_str __attribute__ ((unused)),\
	const char * ifname,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)),\
	const char * nexthop_vrf,\
	long color,\
	const char * color_str __attribute__ ((unused)))
funcdecl_ip_route_vrf;
DEFUN_CMD_FUNC_TEXT(ip_route_vrf)
{
#if 11 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *prefix = NULL;
	struct in_addr mask = { INADDR_ANY };
	const char *mask_str = NULL;
	struct in_addr gate = { INADDR_ANY };
	const char *gate_str = NULL;
	const char *ifname = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;
	const char *nexthop_vrf = NULL;
	long color = 0;
	const char *color_str = NULL;

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
			prefix = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mask")) {
			mask_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &mask);
		}
		if (!strcmp(argv[_i]->varname, "gate")) {
			gate_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &gate);
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "nexthop_vrf")) {
			nexthop_vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "color")) {
			color_str = argv[_i]->arg;
			char *_end;
			color = strtol(argv[_i]->arg, &_end, 10);
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
	if (!prefix) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix");
		return CMD_WARNING;
	}

	return ip_route_vrf_magic(self, vty, argc, argv, no, prefix, mask, mask_str, gate, gate_str, ifname, tag, tag_str, distance, distance_str, label, table, table_str, nexthop_vrf, color, color_str);
}

/* ipv6_route_blackhole => "[no] ipv6 route X:X::X:X/M$prefix [from X:X::X:X/M]           <reject|blackhole>$flag                                    [{                                                           tag (1-4294967295)                                         |(1-255)$distance                                          |vrf NAME                                                  |label WORD                                                |table (1-4294967295)                                    }]" */
DEFUN_CMD_FUNC_DECL(ipv6_route_blackhole)
#define funcdecl_ipv6_route_blackhole static int ipv6_route_blackhole_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * from,\
	const char * from_str __attribute__ ((unused)),\
	const char * flag,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * vrf,\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)))
funcdecl_ipv6_route_blackhole;
DEFUN_CMD_FUNC_TEXT(ipv6_route_blackhole)
{
#if 9 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	struct prefix_ipv6 from = { };
	const char *from_str = NULL;
	const char *flag = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *vrf = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;

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
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "from")) {
			from_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &from);
		}
		if (!strcmp(argv[_i]->varname, "flag")) {
			flag = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
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
	if (!flag) {
		vty_out(vty, "Internal CLI error [%s]\n", "flag");
		return CMD_WARNING;
	}

	return ipv6_route_blackhole_magic(self, vty, argc, argv, no, &prefix, prefix_str, &from, from_str, flag, tag, tag_str, distance, distance_str, vrf, label, table, table_str);
}

/* ipv6_route_blackhole_vrf => "[no] ipv6 route X:X::X:X/M$prefix [from X:X::X:X/M]           <reject|blackhole>$flag                                    [{                                                           tag (1-4294967295)                                         |(1-255)$distance                                          |label WORD                                                |table (1-4294967295)                                    }]" */
DEFUN_CMD_FUNC_DECL(ipv6_route_blackhole_vrf)
#define funcdecl_ipv6_route_blackhole_vrf static int ipv6_route_blackhole_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * from,\
	const char * from_str __attribute__ ((unused)),\
	const char * flag,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)))
funcdecl_ipv6_route_blackhole_vrf;
DEFUN_CMD_FUNC_TEXT(ipv6_route_blackhole_vrf)
{
#if 8 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	struct prefix_ipv6 from = { };
	const char *from_str = NULL;
	const char *flag = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;

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
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "from")) {
			from_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &from);
		}
		if (!strcmp(argv[_i]->varname, "flag")) {
			flag = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
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
	if (!flag) {
		vty_out(vty, "Internal CLI error [%s]\n", "flag");
		return CMD_WARNING;
	}

	return ipv6_route_blackhole_vrf_magic(self, vty, argc, argv, no, &prefix, prefix_str, &from, from_str, flag, tag, tag_str, distance, distance_str, label, table, table_str);
}

/* ipv6_route_address_interface => "[no] ipv6 route X:X::X:X/M$prefix [from X:X::X:X/M]           X:X::X:X$gate                                              <INTERFACE|Null0>$ifname                                   [{                                                           tag (1-4294967295)                                         |(1-255)$distance                                          |vrf NAME                                                  |label WORD                                    	    |table (1-4294967295)                                      |nexthop-vrf NAME                              	    |onlink$onlink                                 	    |color (1-4294967295)                                    }]" */
DEFUN_CMD_FUNC_DECL(ipv6_route_address_interface)
#define funcdecl_ipv6_route_address_interface static int ipv6_route_address_interface_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * from,\
	const char * from_str __attribute__ ((unused)),\
	struct in6_addr gate,\
	const char * gate_str __attribute__ ((unused)),\
	const char * ifname,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * vrf,\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)),\
	const char * nexthop_vrf,\
	const char * onlink,\
	long color,\
	const char * color_str __attribute__ ((unused)))
funcdecl_ipv6_route_address_interface;
DEFUN_CMD_FUNC_TEXT(ipv6_route_address_interface)
{
#if 13 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	struct prefix_ipv6 from = { };
	const char *from_str = NULL;
	struct in6_addr gate = {};
	const char *gate_str = NULL;
	const char *ifname = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *vrf = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;
	const char *nexthop_vrf = NULL;
	const char *onlink = NULL;
	long color = 0;
	const char *color_str = NULL;

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
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "from")) {
			from_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &from);
		}
		if (!strcmp(argv[_i]->varname, "gate")) {
			gate_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &gate);
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "nexthop_vrf")) {
			nexthop_vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "onlink")) {
			onlink = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "color")) {
			color_str = argv[_i]->arg;
			char *_end;
			color = strtol(argv[_i]->arg, &_end, 10);
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
	if (!gate_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "gate_str");
		return CMD_WARNING;
	}
	if (!ifname) {
		vty_out(vty, "Internal CLI error [%s]\n", "ifname");
		return CMD_WARNING;
	}

	return ipv6_route_address_interface_magic(self, vty, argc, argv, no, &prefix, prefix_str, &from, from_str, gate, gate_str, ifname, tag, tag_str, distance, distance_str, vrf, label, table, table_str, nexthop_vrf, onlink, color, color_str);
}

/* ipv6_route_address_interface_vrf => "[no] ipv6 route X:X::X:X/M$prefix [from X:X::X:X/M]           X:X::X:X$gate                                              <INTERFACE|Null0>$ifname                                   [{                                                           tag (1-4294967295)                                         |(1-255)$distance                                          |label WORD                                    	    |table (1-4294967295)                                      |nexthop-vrf NAME                              	    |onlink$onlink                                 	    |color (1-4294967295)                                    }]" */
DEFUN_CMD_FUNC_DECL(ipv6_route_address_interface_vrf)
#define funcdecl_ipv6_route_address_interface_vrf static int ipv6_route_address_interface_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * from,\
	const char * from_str __attribute__ ((unused)),\
	struct in6_addr gate,\
	const char * gate_str __attribute__ ((unused)),\
	const char * ifname,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)),\
	const char * nexthop_vrf,\
	const char * onlink,\
	long color,\
	const char * color_str __attribute__ ((unused)))
funcdecl_ipv6_route_address_interface_vrf;
DEFUN_CMD_FUNC_TEXT(ipv6_route_address_interface_vrf)
{
#if 12 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	struct prefix_ipv6 from = { };
	const char *from_str = NULL;
	struct in6_addr gate = {};
	const char *gate_str = NULL;
	const char *ifname = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;
	const char *nexthop_vrf = NULL;
	const char *onlink = NULL;
	long color = 0;
	const char *color_str = NULL;

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
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "from")) {
			from_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &from);
		}
		if (!strcmp(argv[_i]->varname, "gate")) {
			gate_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &gate);
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "nexthop_vrf")) {
			nexthop_vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "onlink")) {
			onlink = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "color")) {
			color_str = argv[_i]->arg;
			char *_end;
			color = strtol(argv[_i]->arg, &_end, 10);
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
	if (!gate_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "gate_str");
		return CMD_WARNING;
	}
	if (!ifname) {
		vty_out(vty, "Internal CLI error [%s]\n", "ifname");
		return CMD_WARNING;
	}

	return ipv6_route_address_interface_vrf_magic(self, vty, argc, argv, no, &prefix, prefix_str, &from, from_str, gate, gate_str, ifname, tag, tag_str, distance, distance_str, label, table, table_str, nexthop_vrf, onlink, color, color_str);
}

/* ipv6_route => "[no] ipv6 route X:X::X:X/M$prefix [from X:X::X:X/M]           <X:X::X:X$gate|<INTERFACE|Null0>$ifname>                   [{                                                           tag (1-4294967295)                                         |(1-255)$distance                                          |vrf NAME                                                  |label WORD                                    	    |table (1-4294967295)                                      |nexthop-vrf NAME                                          |color (1-4294967295)                                    }]" */
DEFUN_CMD_FUNC_DECL(ipv6_route)
#define funcdecl_ipv6_route static int ipv6_route_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * from,\
	const char * from_str __attribute__ ((unused)),\
	struct in6_addr gate,\
	const char * gate_str __attribute__ ((unused)),\
	const char * ifname,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * vrf,\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)),\
	const char * nexthop_vrf,\
	long color,\
	const char * color_str __attribute__ ((unused)))
funcdecl_ipv6_route;
DEFUN_CMD_FUNC_TEXT(ipv6_route)
{
#if 12 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	struct prefix_ipv6 from = { };
	const char *from_str = NULL;
	struct in6_addr gate = {};
	const char *gate_str = NULL;
	const char *ifname = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *vrf = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;
	const char *nexthop_vrf = NULL;
	long color = 0;
	const char *color_str = NULL;

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
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "from")) {
			from_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &from);
		}
		if (!strcmp(argv[_i]->varname, "gate")) {
			gate_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &gate);
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "nexthop_vrf")) {
			nexthop_vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "color")) {
			color_str = argv[_i]->arg;
			char *_end;
			color = strtol(argv[_i]->arg, &_end, 10);
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

	return ipv6_route_magic(self, vty, argc, argv, no, &prefix, prefix_str, &from, from_str, gate, gate_str, ifname, tag, tag_str, distance, distance_str, vrf, label, table, table_str, nexthop_vrf, color, color_str);
}

/* ipv6_route_vrf => "[no] ipv6 route X:X::X:X/M$prefix [from X:X::X:X/M]           <X:X::X:X$gate|<INTERFACE|Null0>$ifname>                           [{                                                           tag (1-4294967295)                                         |(1-255)$distance                                          |label WORD                                    	    |table (1-4294967295)                                      |nexthop-vrf NAME                              	    |color (1-4294967295)                                    }]" */
DEFUN_CMD_FUNC_DECL(ipv6_route_vrf)
#define funcdecl_ipv6_route_vrf static int ipv6_route_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * from,\
	const char * from_str __attribute__ ((unused)),\
	struct in6_addr gate,\
	const char * gate_str __attribute__ ((unused)),\
	const char * ifname,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	long distance,\
	const char * distance_str __attribute__ ((unused)),\
	const char * label,\
	long table,\
	const char * table_str __attribute__ ((unused)),\
	const char * nexthop_vrf,\
	long color,\
	const char * color_str __attribute__ ((unused)))
funcdecl_ipv6_route_vrf;
DEFUN_CMD_FUNC_TEXT(ipv6_route_vrf)
{
#if 11 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	struct prefix_ipv6 from = { };
	const char *from_str = NULL;
	struct in6_addr gate = {};
	const char *gate_str = NULL;
	const char *ifname = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	long distance = 0;
	const char *distance_str = NULL;
	const char *label = NULL;
	long table = 0;
	const char *table_str = NULL;
	const char *nexthop_vrf = NULL;
	long color = 0;
	const char *color_str = NULL;

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
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "from")) {
			from_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &from);
		}
		if (!strcmp(argv[_i]->varname, "gate")) {
			gate_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &gate);
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "distance")) {
			distance_str = argv[_i]->arg;
			char *_end;
			distance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "nexthop_vrf")) {
			nexthop_vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "color")) {
			color_str = argv[_i]->arg;
			char *_end;
			color = strtol(argv[_i]->arg, &_end, 10);
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

	return ipv6_route_vrf_magic(self, vty, argc, argv, no, &prefix, prefix_str, &from, from_str, gate, gate_str, ifname, tag, tag_str, distance, distance_str, label, table, table_str, nexthop_vrf, color, color_str);
}

/* debug_staticd => "[no] debug static [{events$events|route$route}]" */
DEFUN_CMD_FUNC_DECL(debug_staticd)
#define funcdecl_debug_staticd static int debug_staticd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * events,\
	const char * route)
funcdecl_debug_staticd;
DEFUN_CMD_FUNC_TEXT(debug_staticd)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *events = NULL;
	const char *route = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "events")) {
			events = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "route")) {
			route = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return debug_staticd_magic(self, vty, argc, argv, no, events, route);
}

