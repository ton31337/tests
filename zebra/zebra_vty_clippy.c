/* show_ip_nht => "show <ip$ipv4|ipv6$ipv6> <nht|import-check>$type [<A.B.C.D|X:X::X:X>$addr|vrf NAME$vrf_name [<A.B.C.D|X:X::X:X>$addr]|vrf all$vrf_all] [mrib$mrib]" */
DEFUN_CMD_FUNC_DECL(show_ip_nht)
#define funcdecl_show_ip_nht static int show_ip_nht_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ipv4,\
	const char * ipv6,\
	const char * type,\
	const union sockunion * addr,\
	const char * addr_str __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * vrf_all,\
	const char * mrib)
funcdecl_show_ip_nht;
DEFUN_CMD_FUNC_TEXT(show_ip_nht)
{
#if 7 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ipv4 = NULL;
	const char *ipv6 = NULL;
	const char *type = NULL;
	union sockunion s__addr = { .sa.sa_family = AF_UNSPEC }, *addr = NULL;
	const char *addr_str = NULL;
	const char *vrf_name = NULL;
	const char *vrf_all = NULL;
	const char *mrib = NULL;

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
		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "addr")) {
			addr_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__addr.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__addr.sin6.sin6_addr);
				addr = &s__addr;
			} else {
				s__addr.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__addr.sin.sin_addr);
				addr = &s__addr;
			}
		}
		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_all")) {
			vrf_all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mrib")) {
			mrib = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!type) {
		vty_out(vty, "Internal CLI error [%s]\n", "type");
		return CMD_WARNING;
	}

	return show_ip_nht_magic(self, vty, argc, argv, ipv4, ipv6, type, addr, addr_str, vrf_name, vrf_all, mrib);
}

/* show_interface_nexthop_group => "show interface [IFNAME$if_name] nexthop-group" */
DEFUN_CMD_FUNC_DECL(show_interface_nexthop_group)
#define funcdecl_show_interface_nexthop_group static int show_interface_nexthop_group_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * if_name)
funcdecl_show_interface_nexthop_group;
DEFUN_CMD_FUNC_TEXT(show_interface_nexthop_group)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *if_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "if_name")) {
			if_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_interface_nexthop_group_magic(self, vty, argc, argv, if_name);
}

/* show_nexthop_group => "show nexthop-group rib <(0-4294967295)$id|[singleton <ip$v4|ipv6$v6>] [<kernel|zebra|bgp|sharp>$type_str] [vrf <NAME$vrf_name|all$vrf_all>]>" */
DEFUN_CMD_FUNC_DECL(show_nexthop_group)
#define funcdecl_show_nexthop_group static int show_nexthop_group_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long id,\
	const char * id_str __attribute__ ((unused)),\
	const char * v4,\
	const char * v6,\
	const char * type_str,\
	const char * vrf_name,\
	const char * vrf_all)
funcdecl_show_nexthop_group;
DEFUN_CMD_FUNC_TEXT(show_nexthop_group)
{
#if 6 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long id = 0;
	const char *id_str = NULL;
	const char *v4 = NULL;
	const char *v6 = NULL;
	const char *type_str = NULL;
	const char *vrf_name = NULL;
	const char *vrf_all = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "id")) {
			id_str = argv[_i]->arg;
			char *_end;
			id = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "v4")) {
			v4 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "v6")) {
			v6 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "type_str")) {
			type_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_all")) {
			vrf_all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_nexthop_group_magic(self, vty, argc, argv, id, id_str, v4, v6, type_str, vrf_name, vrf_all);
}

/* nexthop_group_use_enable => "[no] zebra nexthop kernel enable" */
DEFUN_CMD_FUNC_DECL(nexthop_group_use_enable)
#define funcdecl_nexthop_group_use_enable static int nexthop_group_use_enable_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_nexthop_group_use_enable;
DEFUN_CMD_FUNC_TEXT(nexthop_group_use_enable)
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

	return nexthop_group_use_enable_magic(self, vty, argc, argv, no);
}

/* proto_nexthop_group_only => "[no] zebra nexthop proto only" */
DEFUN_CMD_FUNC_DECL(proto_nexthop_group_only)
#define funcdecl_proto_nexthop_group_only static int proto_nexthop_group_only_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_proto_nexthop_group_only;
DEFUN_CMD_FUNC_TEXT(proto_nexthop_group_only)
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

	return proto_nexthop_group_only_magic(self, vty, argc, argv, no);
}

/* backup_nexthop_recursive_use_enable => "[no] zebra nexthop resolve-via-backup" */
DEFUN_CMD_FUNC_DECL(backup_nexthop_recursive_use_enable)
#define funcdecl_backup_nexthop_recursive_use_enable static int backup_nexthop_recursive_use_enable_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_backup_nexthop_recursive_use_enable;
DEFUN_CMD_FUNC_TEXT(backup_nexthop_recursive_use_enable)
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

	return backup_nexthop_recursive_use_enable_magic(self, vty, argc, argv, no);
}

/* rnh_hide_backups => "[no] ip nht hide-backup-events" */
DEFUN_CMD_FUNC_DECL(rnh_hide_backups)
#define funcdecl_rnh_hide_backups static int rnh_hide_backups_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_rnh_hide_backups;
DEFUN_CMD_FUNC_TEXT(rnh_hide_backups)
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

	return rnh_hide_backups_magic(self, vty, argc, argv, no);
}

/* show_route => "show         <	  ip$ipv4 <fib$fib|route> [table <(1-4294967295)$table|all$table_all>]	  [vrf <NAME$vrf_name|all$vrf_all>]	   [{	    tag (1-4294967295)	    |A.B.C.D/M$prefix longer-prefixes	    |supernets-only$supernets_only	   }]	   [<	    <kernel|connected|static|rip|ospf|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric>$type_str	    |ospf$type_str (1-65535)$ospf_instance_id	   >]          |ipv6$ipv6 <fib$fib|route> [table <(1-4294967295)$table|all$table_all>]	  [vrf <NAME$vrf_name|all$vrf_all>]	   [{	    tag (1-4294967295)	    |X:X::X:X/M$prefix longer-prefixes	   }]	   [<kernel|connected|static|ripng|ospf6|isis|bgp|nhrp|table|vnc|babel|sharp|openfabric>$type_str]	 >        [<json$json|nexthop-group$ng>]" */
DEFUN_CMD_FUNC_DECL(show_route)
#define funcdecl_show_route static int show_route_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ipv4,\
	const char * fib,\
	long table,\
	const char * table_str __attribute__ ((unused)),\
	const char * table_all,\
	const char * vrf_name,\
	const char * vrf_all,\
	long tag,\
	const char * tag_str __attribute__ ((unused)),\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const char * supernets_only,\
	const char * type_str,\
	long ospf_instance_id,\
	const char * ospf_instance_id_str __attribute__ ((unused)),\
	const char * ipv6,\
	const char * json,\
	const char * ng)
funcdecl_show_route;
DEFUN_CMD_FUNC_TEXT(show_route)
{
#if 14 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ipv4 = NULL;
	const char *fib = NULL;
	long table = 0;
	const char *table_str = NULL;
	const char *table_all = NULL;
	const char *vrf_name = NULL;
	const char *vrf_all = NULL;
	long tag = 0;
	const char *tag_str = NULL;
	struct prefix prefix = { };
	const char *prefix_str = NULL;
	const char *supernets_only = NULL;
	const char *type_str = NULL;
	long ospf_instance_id = 0;
	const char *ospf_instance_id_str = NULL;
	const char *ipv6 = NULL;
	const char *json = NULL;
	const char *ng = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ipv4")) {
			ipv4 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "fib")) {
			fib = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table")) {
			table_str = argv[_i]->arg;
			char *_end;
			table = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "table_all")) {
			table_all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_all")) {
			vrf_all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag_str = argv[_i]->arg;
			char *_end;
			tag = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "supernets_only")) {
			supernets_only = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "type_str")) {
			type_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ospf_instance_id")) {
			ospf_instance_id_str = argv[_i]->arg;
			char *_end;
			ospf_instance_id = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "ipv6")) {
			ipv6 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ng")) {
			ng = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_route_magic(self, vty, argc, argv, ipv4, fib, table, table_str, table_all, vrf_name, vrf_all, tag, tag_str, &prefix, prefix_str, supernets_only, type_str, ospf_instance_id, ospf_instance_id_str, ipv6, json, ng);
}

/* show_route_detail => "show         <          ip$ipv4 <fib$fib|route> [vrf <NAME$vrf_name|all$vrf_all>]          <	   A.B.C.D$address	   |A.B.C.D/M$prefix	  >          |ipv6$ipv6 <fib$fib|route> [vrf <NAME$vrf_name|all$vrf_all>]          <	   X:X::X:X$address	   |X:X::X:X/M$prefix	  >	 >	 [json$json] [nexthop-group$ng]" */
DEFUN_CMD_FUNC_DECL(show_route_detail)
#define funcdecl_show_route_detail static int show_route_detail_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ipv4,\
	const char * fib,\
	const char * vrf_name,\
	const char * vrf_all,\
	const union sockunion * address,\
	const char * address_str __attribute__ ((unused)),\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const char * ipv6,\
	const char * json,\
	const char * ng)
funcdecl_show_route_detail;
DEFUN_CMD_FUNC_TEXT(show_route_detail)
{
#if 9 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ipv4 = NULL;
	const char *fib = NULL;
	const char *vrf_name = NULL;
	const char *vrf_all = NULL;
	union sockunion s__address = { .sa.sa_family = AF_UNSPEC }, *address = NULL;
	const char *address_str = NULL;
	struct prefix prefix = { };
	const char *prefix_str = NULL;
	const char *ipv6 = NULL;
	const char *json = NULL;
	const char *ng = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ipv4")) {
			ipv4 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "fib")) {
			fib = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_all")) {
			vrf_all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__address.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__address.sin6.sin6_addr);
				address = &s__address;
			} else {
				s__address.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__address.sin.sin_addr);
				address = &s__address;
			}
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "ipv6")) {
			ipv6 = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ng")) {
			ng = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_route_detail_magic(self, vty, argc, argv, ipv4, fib, vrf_name, vrf_all, address, address_str, &prefix, prefix_str, ipv6, json, ng);
}

/* show_route_summary => "show <ip$ipv4|ipv6$ipv6> route [vrf <NAME$vrf_name|all$vrf_all>]             summary [table (1-4294967295)$table_id] [prefix$prefix] [json]" */
DEFUN_CMD_FUNC_DECL(show_route_summary)
#define funcdecl_show_route_summary static int show_route_summary_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ipv4,\
	const char * ipv6,\
	const char * vrf_name,\
	const char * vrf_all,\
	long table_id,\
	const char * table_id_str __attribute__ ((unused)),\
	const char * prefix)
funcdecl_show_route_summary;
DEFUN_CMD_FUNC_TEXT(show_route_summary)
{
#if 6 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ipv4 = NULL;
	const char *ipv6 = NULL;
	const char *vrf_name = NULL;
	const char *vrf_all = NULL;
	long table_id = 0;
	const char *table_id_str = NULL;
	const char *prefix = NULL;

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
		if (!strcmp(argv[_i]->varname, "vrf_all")) {
			vrf_all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "table_id")) {
			table_id_str = argv[_i]->arg;
			char *_end;
			table_id = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_route_summary_magic(self, vty, argc, argv, ipv4, ipv6, vrf_name, vrf_all, table_id, table_id_str, prefix);
}

/* evpn_mh_mac_holdtime => "[no$no] evpn mh mac-holdtime (0-86400)$duration" */
DEFUN_CMD_FUNC_DECL(evpn_mh_mac_holdtime)
#define funcdecl_evpn_mh_mac_holdtime static int evpn_mh_mac_holdtime_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long duration,\
	const char * duration_str __attribute__ ((unused)))
funcdecl_evpn_mh_mac_holdtime;
DEFUN_CMD_FUNC_TEXT(evpn_mh_mac_holdtime)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long duration = 0;
	const char *duration_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "duration")) {
			duration_str = argv[_i]->arg;
			char *_end;
			duration = strtol(argv[_i]->arg, &_end, 10);
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

	return evpn_mh_mac_holdtime_magic(self, vty, argc, argv, no, duration, duration_str);
}

/* evpn_mh_neigh_holdtime => "[no$no] evpn mh neigh-holdtime (0-86400)$duration" */
DEFUN_CMD_FUNC_DECL(evpn_mh_neigh_holdtime)
#define funcdecl_evpn_mh_neigh_holdtime static int evpn_mh_neigh_holdtime_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long duration,\
	const char * duration_str __attribute__ ((unused)))
funcdecl_evpn_mh_neigh_holdtime;
DEFUN_CMD_FUNC_TEXT(evpn_mh_neigh_holdtime)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long duration = 0;
	const char *duration_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "duration")) {
			duration_str = argv[_i]->arg;
			char *_end;
			duration = strtol(argv[_i]->arg, &_end, 10);
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

	return evpn_mh_neigh_holdtime_magic(self, vty, argc, argv, no, duration, duration_str);
}

/* evpn_mh_startup_delay => "[no] evpn mh startup-delay(0-3600)$duration" */
DEFUN_CMD_FUNC_DECL(evpn_mh_startup_delay)
#define funcdecl_evpn_mh_startup_delay static int evpn_mh_startup_delay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long duration,\
	const char * duration_str __attribute__ ((unused)))
funcdecl_evpn_mh_startup_delay;
DEFUN_CMD_FUNC_TEXT(evpn_mh_startup_delay)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long duration = 0;
	const char *duration_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "duration")) {
			duration_str = argv[_i]->arg;
			char *_end;
			duration = strtol(argv[_i]->arg, &_end, 10);
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

	return evpn_mh_startup_delay_magic(self, vty, argc, argv, no, duration, duration_str);
}

/* evpn_mh_redirect_off => "[no$no] evpn mh redirect-off" */
DEFUN_CMD_FUNC_DECL(evpn_mh_redirect_off)
#define funcdecl_evpn_mh_redirect_off static int evpn_mh_redirect_off_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_evpn_mh_redirect_off;
DEFUN_CMD_FUNC_TEXT(evpn_mh_redirect_off)
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

	return evpn_mh_redirect_off_magic(self, vty, argc, argv, no);
}

/* show_evpn_neigh => "show ip neigh" */
DEFUN_CMD_FUNC_DECL(show_evpn_neigh)
#define funcdecl_show_evpn_neigh static int show_evpn_neigh_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_evpn_neigh;
DEFUN_CMD_FUNC_TEXT(show_evpn_neigh)
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

	return show_evpn_neigh_magic(self, vty, argc, argv);
}

/* show_evpn_l2_nh => "show evpn l2-nh [json$json]" */
DEFUN_CMD_FUNC_DECL(show_evpn_l2_nh)
#define funcdecl_show_evpn_l2_nh static int show_evpn_l2_nh_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_evpn_l2_nh;
DEFUN_CMD_FUNC_TEXT(show_evpn_l2_nh)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_evpn_l2_nh_magic(self, vty, argc, argv, json);
}

/* show_evpn_es => "show evpn es [NAME$esi_str|detail$detail] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_evpn_es)
#define funcdecl_show_evpn_es static int show_evpn_es_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * esi_str,\
	const char * detail,\
	const char * json)
funcdecl_show_evpn_es;
DEFUN_CMD_FUNC_TEXT(show_evpn_es)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *esi_str = NULL;
	const char *detail = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "esi_str")) {
			esi_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_evpn_es_magic(self, vty, argc, argv, esi_str, detail, json);
}

/* show_evpn_es_evi => "show evpn es-evi [vni (1-16777215)$vni] [detail$detail] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_evpn_es_evi)
#define funcdecl_show_evpn_es_evi static int show_evpn_es_evi_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long vni,\
	const char * vni_str __attribute__ ((unused)),\
	const char * detail,\
	const char * json)
funcdecl_show_evpn_es_evi;
DEFUN_CMD_FUNC_TEXT(show_evpn_es_evi)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long vni = 0;
	const char *vni_str = NULL;
	const char *detail = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vni")) {
			vni_str = argv[_i]->arg;
			char *_end;
			vni = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_evpn_es_evi_magic(self, vty, argc, argv, vni, vni_str, detail, json);
}

/* show_evpn_access_vlan => "show evpn access-vlan [(1-4094)$vid | detail$detail] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_evpn_access_vlan)
#define funcdecl_show_evpn_access_vlan static int show_evpn_access_vlan_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long vid,\
	const char * vid_str __attribute__ ((unused)),\
	const char * detail,\
	const char * json)
funcdecl_show_evpn_access_vlan;
DEFUN_CMD_FUNC_TEXT(show_evpn_access_vlan)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long vid = 0;
	const char *vid_str = NULL;
	const char *detail = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vid")) {
			vid_str = argv[_i]->arg;
			char *_end;
			vid = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_evpn_access_vlan_magic(self, vty, argc, argv, vid, vid_str, detail, json);
}

/* show_evpn_mac_vni_all_dad => "show evpn mac vni all duplicate [json]" */
DEFUN_CMD_FUNC_DECL(show_evpn_mac_vni_all_dad)
#define funcdecl_show_evpn_mac_vni_all_dad static int show_evpn_mac_vni_all_dad_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_evpn_mac_vni_all_dad;
DEFUN_CMD_FUNC_TEXT(show_evpn_mac_vni_all_dad)
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

	return show_evpn_mac_vni_all_dad_magic(self, vty, argc, argv);
}

/* show_evpn_mac_vni_dad => "show evpn mac vni (1-16777215) duplicate [json]" */
DEFUN_CMD_FUNC_DECL(show_evpn_mac_vni_dad)
#define funcdecl_show_evpn_mac_vni_dad static int show_evpn_mac_vni_dad_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long vni,\
	const char * vni_str __attribute__ ((unused)))
funcdecl_show_evpn_mac_vni_dad;
DEFUN_CMD_FUNC_TEXT(show_evpn_mac_vni_dad)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long vni = 0;
	const char *vni_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vni")) {
			vni_str = argv[_i]->arg;
			char *_end;
			vni = strtol(argv[_i]->arg, &_end, 10);
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
	if (!vni_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vni_str");
		return CMD_WARNING;
	}

	return show_evpn_mac_vni_dad_magic(self, vty, argc, argv, vni, vni_str);
}

/* show_evpn_neigh_vni_dad => "show evpn arp-cache vni (1-16777215)duplicate [json]" */
DEFUN_CMD_FUNC_DECL(show_evpn_neigh_vni_dad)
#define funcdecl_show_evpn_neigh_vni_dad static int show_evpn_neigh_vni_dad_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long vni,\
	const char * vni_str __attribute__ ((unused)))
funcdecl_show_evpn_neigh_vni_dad;
DEFUN_CMD_FUNC_TEXT(show_evpn_neigh_vni_dad)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long vni = 0;
	const char *vni_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vni")) {
			vni_str = argv[_i]->arg;
			char *_end;
			vni = strtol(argv[_i]->arg, &_end, 10);
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
	if (!vni_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vni_str");
		return CMD_WARNING;
	}

	return show_evpn_neigh_vni_dad_magic(self, vty, argc, argv, vni, vni_str);
}

/* show_evpn_neigh_vni_all_dad => "show evpn arp-cache vni all duplicate [json]" */
DEFUN_CMD_FUNC_DECL(show_evpn_neigh_vni_all_dad)
#define funcdecl_show_evpn_neigh_vni_all_dad static int show_evpn_neigh_vni_all_dad_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_evpn_neigh_vni_all_dad;
DEFUN_CMD_FUNC_TEXT(show_evpn_neigh_vni_all_dad)
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

	return show_evpn_neigh_vni_all_dad_magic(self, vty, argc, argv);
}

/* show_pbr_rule => "show pbr rule" */
DEFUN_CMD_FUNC_DECL(show_pbr_rule)
#define funcdecl_show_pbr_rule static int show_pbr_rule_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_pbr_rule;
DEFUN_CMD_FUNC_TEXT(show_pbr_rule)
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

	return show_pbr_rule_magic(self, vty, argc, argv);
}

/* pbr_nexthop_resolve => "[no$no] pbr nexthop-resolve" */
DEFUN_CMD_FUNC_DECL(pbr_nexthop_resolve)
#define funcdecl_pbr_nexthop_resolve static int pbr_nexthop_resolve_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_pbr_nexthop_resolve;
DEFUN_CMD_FUNC_TEXT(pbr_nexthop_resolve)
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

	return pbr_nexthop_resolve_magic(self, vty, argc, argv, no);
}

/* clear_evpn_dup_addr => "clear evpn dup-addr vni <all$vni_all |(1-16777215)$vni [mac X:X:X:X:X:X | ip <A.B.C.D|X:X::X:X>]>" */
DEFUN_CMD_FUNC_DECL(clear_evpn_dup_addr)
#define funcdecl_clear_evpn_dup_addr static int clear_evpn_dup_addr_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vni_all,\
	long vni,\
	const char * vni_str __attribute__ ((unused)),\
	struct prefix_eth * mac,\
	const char * mac_str __attribute__ ((unused)),\
	const union sockunion * ip,\
	const char * ip_str __attribute__ ((unused)))
funcdecl_clear_evpn_dup_addr;
DEFUN_CMD_FUNC_TEXT(clear_evpn_dup_addr)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vni_all = NULL;
	long vni = 0;
	const char *vni_str = NULL;
	struct prefix_eth mac = { };
	const char *mac_str = NULL;
	union sockunion s__ip = { .sa.sa_family = AF_UNSPEC }, *ip = NULL;
	const char *ip_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vni_all")) {
			vni_all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vni")) {
			vni_str = argv[_i]->arg;
			char *_end;
			vni = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "mac")) {
			mac_str = argv[_i]->arg;
			_fail = !str2prefix_eth(argv[_i]->arg, &mac);
		}
		if (!strcmp(argv[_i]->varname, "ip")) {
			ip_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__ip.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__ip.sin6.sin6_addr);
				ip = &s__ip;
			} else {
				s__ip.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__ip.sin.sin_addr);
				ip = &s__ip;
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

	return clear_evpn_dup_addr_magic(self, vty, argc, argv, vni_all, vni, vni_str, &mac, mac_str, ip, ip_str);
}

/* zebra_nexthop_group_keep => "[no] zebra nexthop-group keep (1-3600)" */
DEFUN_CMD_FUNC_DECL(zebra_nexthop_group_keep)
#define funcdecl_zebra_nexthop_group_keep static int zebra_nexthop_group_keep_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long keep,\
	const char * keep_str __attribute__ ((unused)))
funcdecl_zebra_nexthop_group_keep;
DEFUN_CMD_FUNC_TEXT(zebra_nexthop_group_keep)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long keep = 0;
	const char *keep_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "keep")) {
			keep_str = argv[_i]->arg;
			char *_end;
			keep = strtol(argv[_i]->arg, &_end, 10);
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
	if (!keep_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "keep_str");
		return CMD_WARNING;
	}

	return zebra_nexthop_group_keep_magic(self, vty, argc, argv, no, keep, keep_str);
}

#ifdef HAVE_NETLINK
/* zebra_protodown_bit => "zebra protodown reason-bit (0-31)$bit" */
DEFUN_CMD_FUNC_DECL(zebra_protodown_bit)
#define funcdecl_zebra_protodown_bit static int zebra_protodown_bit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long bit,\
	const char * bit_str __attribute__ ((unused)))
funcdecl_zebra_protodown_bit;
DEFUN_CMD_FUNC_TEXT(zebra_protodown_bit)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long bit = 0;
	const char *bit_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bit")) {
			bit_str = argv[_i]->arg;
			char *_end;
			bit = strtol(argv[_i]->arg, &_end, 10);
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
	if (!bit_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "bit_str");
		return CMD_WARNING;
	}

	return zebra_protodown_bit_magic(self, vty, argc, argv, bit, bit_str);
}
#endif

#ifdef HAVE_NETLINK
/* no_zebra_protodown_bit => "no zebra protodown reason-bit [(0-31)$bit]" */
DEFUN_CMD_FUNC_DECL(no_zebra_protodown_bit)
#define funcdecl_no_zebra_protodown_bit static int no_zebra_protodown_bit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long bit,\
	const char * bit_str __attribute__ ((unused)))
funcdecl_no_zebra_protodown_bit;
DEFUN_CMD_FUNC_TEXT(no_zebra_protodown_bit)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long bit = 0;
	const char *bit_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bit")) {
			bit_str = argv[_i]->arg;
			char *_end;
			bit = strtol(argv[_i]->arg, &_end, 10);
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

	return no_zebra_protodown_bit_magic(self, vty, argc, argv, bit, bit_str);
}
#endif

