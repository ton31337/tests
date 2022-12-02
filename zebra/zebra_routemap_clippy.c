/* match_ip_address_prefix_len => "match ip address prefix-len (0-32)$length" */
DEFUN_CMD_FUNC_DECL(match_ip_address_prefix_len)
#define funcdecl_match_ip_address_prefix_len static int match_ip_address_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long length,\
	const char * length_str __attribute__ ((unused)))
funcdecl_match_ip_address_prefix_len;
DEFUN_CMD_FUNC_TEXT(match_ip_address_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long length = 0;
	const char *length_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "length")) {
			length_str = argv[_i]->arg;
			char *_end;
			length = strtol(argv[_i]->arg, &_end, 10);
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
	if (!length_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "length_str");
		return CMD_WARNING;
	}

	return match_ip_address_prefix_len_magic(self, vty, argc, argv, length, length_str);
}

/* no_match_ip_address_prefix_len => "no match ip address prefix-len [(0-32)]" */
DEFUN_CMD_FUNC_DECL(no_match_ip_address_prefix_len)
#define funcdecl_no_match_ip_address_prefix_len static int no_match_ip_address_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long prefix_len,\
	const char * prefix_len_str __attribute__ ((unused)))
funcdecl_no_match_ip_address_prefix_len;
DEFUN_CMD_FUNC_TEXT(no_match_ip_address_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long prefix_len = 0;
	const char *prefix_len_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix_len")) {
			prefix_len_str = argv[_i]->arg;
			char *_end;
			prefix_len = strtol(argv[_i]->arg, &_end, 10);
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

	return no_match_ip_address_prefix_len_magic(self, vty, argc, argv, prefix_len, prefix_len_str);
}

/* match_ipv6_address_prefix_len => "match ipv6 address prefix-len (0-128)$length" */
DEFUN_CMD_FUNC_DECL(match_ipv6_address_prefix_len)
#define funcdecl_match_ipv6_address_prefix_len static int match_ipv6_address_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long length,\
	const char * length_str __attribute__ ((unused)))
funcdecl_match_ipv6_address_prefix_len;
DEFUN_CMD_FUNC_TEXT(match_ipv6_address_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long length = 0;
	const char *length_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "length")) {
			length_str = argv[_i]->arg;
			char *_end;
			length = strtol(argv[_i]->arg, &_end, 10);
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
	if (!length_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "length_str");
		return CMD_WARNING;
	}

	return match_ipv6_address_prefix_len_magic(self, vty, argc, argv, length, length_str);
}

/* no_match_ipv6_address_prefix_len => "no match ipv6 address prefix-len [(0-128)]" */
DEFUN_CMD_FUNC_DECL(no_match_ipv6_address_prefix_len)
#define funcdecl_no_match_ipv6_address_prefix_len static int no_match_ipv6_address_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long prefix_len,\
	const char * prefix_len_str __attribute__ ((unused)))
funcdecl_no_match_ipv6_address_prefix_len;
DEFUN_CMD_FUNC_TEXT(no_match_ipv6_address_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long prefix_len = 0;
	const char *prefix_len_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix_len")) {
			prefix_len_str = argv[_i]->arg;
			char *_end;
			prefix_len = strtol(argv[_i]->arg, &_end, 10);
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

	return no_match_ipv6_address_prefix_len_magic(self, vty, argc, argv, prefix_len, prefix_len_str);
}

/* match_ip_nexthop_prefix_len => "match ip next-hop prefix-len (0-32)$length" */
DEFUN_CMD_FUNC_DECL(match_ip_nexthop_prefix_len)
#define funcdecl_match_ip_nexthop_prefix_len static int match_ip_nexthop_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long length,\
	const char * length_str __attribute__ ((unused)))
funcdecl_match_ip_nexthop_prefix_len;
DEFUN_CMD_FUNC_TEXT(match_ip_nexthop_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long length = 0;
	const char *length_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "length")) {
			length_str = argv[_i]->arg;
			char *_end;
			length = strtol(argv[_i]->arg, &_end, 10);
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
	if (!length_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "length_str");
		return CMD_WARNING;
	}

	return match_ip_nexthop_prefix_len_magic(self, vty, argc, argv, length, length_str);
}

/* no_match_ip_nexthop_prefix_len => "no match ip next-hop prefix-len [(0-32)]" */
DEFUN_CMD_FUNC_DECL(no_match_ip_nexthop_prefix_len)
#define funcdecl_no_match_ip_nexthop_prefix_len static int no_match_ip_nexthop_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long prefix_len,\
	const char * prefix_len_str __attribute__ ((unused)))
funcdecl_no_match_ip_nexthop_prefix_len;
DEFUN_CMD_FUNC_TEXT(no_match_ip_nexthop_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long prefix_len = 0;
	const char *prefix_len_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix_len")) {
			prefix_len_str = argv[_i]->arg;
			char *_end;
			prefix_len = strtol(argv[_i]->arg, &_end, 10);
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

	return no_match_ip_nexthop_prefix_len_magic(self, vty, argc, argv, prefix_len, prefix_len_str);
}

/* match_source_protocol => "match source-protocol <kernel|connected|static|rip|ripng|ospf|ospf6|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric>$proto" */
DEFUN_CMD_FUNC_DECL(match_source_protocol)
#define funcdecl_match_source_protocol static int match_source_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * proto)
funcdecl_match_source_protocol;
DEFUN_CMD_FUNC_TEXT(match_source_protocol)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *proto = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}

	return match_source_protocol_magic(self, vty, argc, argv, proto);
}

/* no_match_source_protocol => "no match source-protocol [<kernel|connected|static|rip|ripng|ospf|ospf6|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric>]" */
DEFUN_CMD_FUNC_DECL(no_match_source_protocol)
#define funcdecl_no_match_source_protocol static int no_match_source_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_match_source_protocol;
DEFUN_CMD_FUNC_TEXT(no_match_source_protocol)
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

	return no_match_source_protocol_magic(self, vty, argc, argv);
}

/* match_source_instance => "match source-instance (0-255)$instance" */
DEFUN_CMD_FUNC_DECL(match_source_instance)
#define funcdecl_match_source_instance static int match_source_instance_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long instance,\
	const char * instance_str __attribute__ ((unused)))
funcdecl_match_source_instance;
DEFUN_CMD_FUNC_TEXT(match_source_instance)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long instance = 0;
	const char *instance_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

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
	if (!instance_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "instance_str");
		return CMD_WARNING;
	}

	return match_source_instance_magic(self, vty, argc, argv, instance, instance_str);
}

/* no_match_source_instance => "no match source-instance [(0-255)]" */
DEFUN_CMD_FUNC_DECL(no_match_source_instance)
#define funcdecl_no_match_source_instance static int no_match_source_instance_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long source_instance,\
	const char * source_instance_str __attribute__ ((unused)))
funcdecl_no_match_source_instance;
DEFUN_CMD_FUNC_TEXT(no_match_source_instance)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long source_instance = 0;
	const char *source_instance_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "source_instance")) {
			source_instance_str = argv[_i]->arg;
			char *_end;
			source_instance = strtol(argv[_i]->arg, &_end, 10);
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

	return no_match_source_instance_magic(self, vty, argc, argv, source_instance, source_instance_str);
}

/* set_src => "set src <A.B.C.D$addrv4|X:X::X:X$addrv6>" */
DEFUN_CMD_FUNC_DECL(set_src)
#define funcdecl_set_src static int set_src_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr addrv4,\
	const char * addrv4_str __attribute__ ((unused)),\
	struct in6_addr addrv6,\
	const char * addrv6_str __attribute__ ((unused)))
funcdecl_set_src;
DEFUN_CMD_FUNC_TEXT(set_src)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr addrv4 = { INADDR_ANY };
	const char *addrv4_str = NULL;
	struct in6_addr addrv6 = {};
	const char *addrv6_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "addrv4")) {
			addrv4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &addrv4);
		}
		if (!strcmp(argv[_i]->varname, "addrv6")) {
			addrv6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &addrv6);
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

	return set_src_magic(self, vty, argc, argv, addrv4, addrv4_str, addrv6, addrv6_str);
}

/* no_set_src => "no set src [<A.B.C.D|X:X::X:X>]" */
DEFUN_CMD_FUNC_DECL(no_set_src)
#define funcdecl_no_set_src static int no_set_src_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const union sockunion * src,\
	const char * src_str __attribute__ ((unused)))
funcdecl_no_set_src;
DEFUN_CMD_FUNC_TEXT(no_set_src)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	union sockunion s__src = { .sa.sa_family = AF_UNSPEC }, *src = NULL;
	const char *src_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "src")) {
			src_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__src.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__src.sin6.sin6_addr);
				src = &s__src;
			} else {
				s__src.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__src.sin.sin_addr);
				src = &s__src;
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

	return no_set_src_magic(self, vty, argc, argv, src, src_str);
}

/* ip_protocol => "ip protocol <kernel|connected|static|rip|ospf|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric|any> $proto route-map ROUTE-MAP$rmap" */
DEFUN_CMD_FUNC_DECL(ip_protocol)
#define funcdecl_ip_protocol static int ip_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * proto,\
	const char * rmap)
funcdecl_ip_protocol;
DEFUN_CMD_FUNC_TEXT(ip_protocol)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}
	if (!rmap) {
		vty_out(vty, "Internal CLI error [%s]\n", "rmap");
		return CMD_WARNING;
	}

	return ip_protocol_magic(self, vty, argc, argv, proto, rmap);
}

/* no_ip_protocol => "no ip protocol <kernel|connected|static|rip|ospf|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric|any> $proto [route-map ROUTE-MAP$rmap]" */
DEFUN_CMD_FUNC_DECL(no_ip_protocol)
#define funcdecl_no_ip_protocol static int no_ip_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * proto,\
	const char * rmap)
funcdecl_no_ip_protocol;
DEFUN_CMD_FUNC_TEXT(no_ip_protocol)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}

	return no_ip_protocol_magic(self, vty, argc, argv, proto, rmap);
}

/* show_ip_protocol => "show ip protocol [vrf <NAME$vrf_name|all$vrf_all>]" */
DEFUN_CMD_FUNC_DECL(show_ip_protocol)
#define funcdecl_show_ip_protocol static int show_ip_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * vrf_all)
funcdecl_show_ip_protocol;
DEFUN_CMD_FUNC_TEXT(show_ip_protocol)
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

	return show_ip_protocol_magic(self, vty, argc, argv, vrf_name, vrf_all);
}

/* ipv6_protocol => "ipv6 protocol <kernel|connected|static|ripng|ospf6|isis|bgp|nhrp|table|vnc|babel|sharp|openfabric|any> $proto route-map ROUTE-MAP$rmap" */
DEFUN_CMD_FUNC_DECL(ipv6_protocol)
#define funcdecl_ipv6_protocol static int ipv6_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * proto,\
	const char * rmap)
funcdecl_ipv6_protocol;
DEFUN_CMD_FUNC_TEXT(ipv6_protocol)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}
	if (!rmap) {
		vty_out(vty, "Internal CLI error [%s]\n", "rmap");
		return CMD_WARNING;
	}

	return ipv6_protocol_magic(self, vty, argc, argv, proto, rmap);
}

/* no_ipv6_protocol => "no ipv6 protocol <kernel|connected|static|ripng|ospf6|isis|bgp|nhrp|table|vnc|babel|sharp|openfabric|any> $proto [route-map ROUTE-MAP$rmap]" */
DEFUN_CMD_FUNC_DECL(no_ipv6_protocol)
#define funcdecl_no_ipv6_protocol static int no_ipv6_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * proto,\
	const char * rmap)
funcdecl_no_ipv6_protocol;
DEFUN_CMD_FUNC_TEXT(no_ipv6_protocol)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}

	return no_ipv6_protocol_magic(self, vty, argc, argv, proto, rmap);
}

/* show_ipv6_protocol => "show ipv6 protocol [vrf <NAME$vrf_name|all$vrf_all>]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_protocol)
#define funcdecl_show_ipv6_protocol static int show_ipv6_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * vrf_all)
funcdecl_show_ipv6_protocol;
DEFUN_CMD_FUNC_TEXT(show_ipv6_protocol)
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

	return show_ipv6_protocol_magic(self, vty, argc, argv, vrf_name, vrf_all);
}

/* ip_protocol_nht_rmap => "ip nht <kernel|connected|static|rip|ospf|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric|any> $proto route-map ROUTE-MAP$rmap" */
DEFUN_CMD_FUNC_DECL(ip_protocol_nht_rmap)
#define funcdecl_ip_protocol_nht_rmap static int ip_protocol_nht_rmap_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * proto,\
	const char * rmap)
funcdecl_ip_protocol_nht_rmap;
DEFUN_CMD_FUNC_TEXT(ip_protocol_nht_rmap)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}
	if (!rmap) {
		vty_out(vty, "Internal CLI error [%s]\n", "rmap");
		return CMD_WARNING;
	}

	return ip_protocol_nht_rmap_magic(self, vty, argc, argv, proto, rmap);
}

/* no_ip_protocol_nht_rmap => "no ip nht <kernel|connected|static|rip|ospf|isis|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric|any> $proto route-map [ROUTE-MAP$rmap]" */
DEFUN_CMD_FUNC_DECL(no_ip_protocol_nht_rmap)
#define funcdecl_no_ip_protocol_nht_rmap static int no_ip_protocol_nht_rmap_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * proto,\
	const char * rmap)
funcdecl_no_ip_protocol_nht_rmap;
DEFUN_CMD_FUNC_TEXT(no_ip_protocol_nht_rmap)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}

	return no_ip_protocol_nht_rmap_magic(self, vty, argc, argv, proto, rmap);
}

/* show_ip_protocol_nht => "show ip nht route-map [vrf <NAME$vrf_name|all$vrf_all>]" */
DEFUN_CMD_FUNC_DECL(show_ip_protocol_nht)
#define funcdecl_show_ip_protocol_nht static int show_ip_protocol_nht_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * vrf_all)
funcdecl_show_ip_protocol_nht;
DEFUN_CMD_FUNC_TEXT(show_ip_protocol_nht)
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

	return show_ip_protocol_nht_magic(self, vty, argc, argv, vrf_name, vrf_all);
}

/* ipv6_protocol_nht_rmap => "ipv6 nht <kernel|connected|static|ripng|ospf6|isis|bgp|nhrp|table|vnc|babel|sharp|openfabric|any> $proto route-map ROUTE-MAP$rmap" */
DEFUN_CMD_FUNC_DECL(ipv6_protocol_nht_rmap)
#define funcdecl_ipv6_protocol_nht_rmap static int ipv6_protocol_nht_rmap_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * proto,\
	const char * rmap)
funcdecl_ipv6_protocol_nht_rmap;
DEFUN_CMD_FUNC_TEXT(ipv6_protocol_nht_rmap)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}
	if (!rmap) {
		vty_out(vty, "Internal CLI error [%s]\n", "rmap");
		return CMD_WARNING;
	}

	return ipv6_protocol_nht_rmap_magic(self, vty, argc, argv, proto, rmap);
}

/* no_ipv6_protocol_nht_rmap => "no ipv6 nht <kernel|connected|static|ripng|ospf6|isis|bgp|nhrp|table|vnc|babel|sharp|openfabric|any> $proto [route-map ROUTE-MAP$rmap]" */
DEFUN_CMD_FUNC_DECL(no_ipv6_protocol_nht_rmap)
#define funcdecl_no_ipv6_protocol_nht_rmap static int no_ipv6_protocol_nht_rmap_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * proto,\
	const char * rmap)
funcdecl_no_ipv6_protocol_nht_rmap;
DEFUN_CMD_FUNC_TEXT(no_ipv6_protocol_nht_rmap)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}

	return no_ipv6_protocol_nht_rmap_magic(self, vty, argc, argv, proto, rmap);
}

/* show_ipv6_protocol_nht => "show ipv6 nht route-map [vrf <NAME$vrf_name|all$vrf_all>]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_protocol_nht)
#define funcdecl_show_ipv6_protocol_nht static int show_ipv6_protocol_nht_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * vrf_all)
funcdecl_show_ipv6_protocol_nht;
DEFUN_CMD_FUNC_TEXT(show_ipv6_protocol_nht)
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

	return show_ipv6_protocol_nht_magic(self, vty, argc, argv, vrf_name, vrf_all);
}

