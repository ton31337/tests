#ifndef FABRICD
/* router_isis => "router isis WORD$tag [vrf NAME$vrf_name]" */
DEFUN_CMD_FUNC_DECL(router_isis)
#define funcdecl_router_isis static int router_isis_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * tag,\
	const char * vrf_name)
funcdecl_router_isis;
DEFUN_CMD_FUNC_TEXT(router_isis)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *tag = NULL;
	const char *vrf_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "tag")) {
			tag = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
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
	if (!tag) {
		vty_out(vty, "Internal CLI error [%s]\n", "tag");
		return CMD_WARNING;
	}

	return router_isis_magic(self, vty, argc, argv, tag, vrf_name);
}
#endif

#ifndef FABRICD
/* no_router_isis => "no router isis WORD$tag [vrf NAME$vrf_name]" */
DEFUN_CMD_FUNC_DECL(no_router_isis)
#define funcdecl_no_router_isis static int no_router_isis_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * tag,\
	const char * vrf_name)
funcdecl_no_router_isis;
DEFUN_CMD_FUNC_TEXT(no_router_isis)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *tag = NULL;
	const char *vrf_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "tag")) {
			tag = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
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
	if (!tag) {
		vty_out(vty, "Internal CLI error [%s]\n", "tag");
		return CMD_WARNING;
	}

	return no_router_isis_magic(self, vty, argc, argv, tag, vrf_name);
}
#endif

#ifndef FABRICD
/* ip_router_isis => "ip router isis WORD$tag" */
DEFUN_CMD_FUNC_DECL(ip_router_isis)
#define funcdecl_ip_router_isis static int ip_router_isis_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * tag)
funcdecl_ip_router_isis;
DEFUN_CMD_FUNC_TEXT(ip_router_isis)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *tag = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "tag")) {
			tag = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!tag) {
		vty_out(vty, "Internal CLI error [%s]\n", "tag");
		return CMD_WARNING;
	}

	return ip_router_isis_magic(self, vty, argc, argv, tag);
}
#endif

#ifndef FABRICD
/* ip6_router_isis => "ipv6 router isis WORD$tag" */
DEFUN_CMD_FUNC_DECL(ip6_router_isis)
#define funcdecl_ip6_router_isis static int ip6_router_isis_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * tag)
funcdecl_ip6_router_isis;
DEFUN_CMD_FUNC_TEXT(ip6_router_isis)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *tag = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "tag")) {
			tag = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!tag) {
		vty_out(vty, "Internal CLI error [%s]\n", "tag");
		return CMD_WARNING;
	}

	return ip6_router_isis_magic(self, vty, argc, argv, tag);
}
#endif

#ifndef FABRICD
/* no_ip_router_isis => "no <ip|ipv6>$ip router isis [WORD]$tag" */
DEFUN_CMD_FUNC_DECL(no_ip_router_isis)
#define funcdecl_no_ip_router_isis static int no_ip_router_isis_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ip,\
	const char * tag)
funcdecl_no_ip_router_isis;
DEFUN_CMD_FUNC_TEXT(no_ip_router_isis)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ip = NULL;
	const char *tag = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ip")) {
			ip = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "tag")) {
			tag = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!ip) {
		vty_out(vty, "Internal CLI error [%s]\n", "ip");
		return CMD_WARNING;
	}

	return no_ip_router_isis_magic(self, vty, argc, argv, ip, tag);
}
#endif

#ifndef FABRICD
/* isis_bfd => "[no] isis bfd" */
DEFUN_CMD_FUNC_DECL(isis_bfd)
#define funcdecl_isis_bfd static int isis_bfd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_isis_bfd;
DEFUN_CMD_FUNC_TEXT(isis_bfd)
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

	return isis_bfd_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* isis_bfd_profile => "[no] isis bfd profile BFDPROF$profile" */
DEFUN_CMD_FUNC_DECL(isis_bfd_profile)
#define funcdecl_isis_bfd_profile static int isis_bfd_profile_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * profile)
funcdecl_isis_bfd_profile;
DEFUN_CMD_FUNC_TEXT(isis_bfd_profile)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *profile = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "profile")) {
			profile = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!profile) {
		vty_out(vty, "Internal CLI error [%s]\n", "profile");
		return CMD_WARNING;
	}

	return isis_bfd_profile_magic(self, vty, argc, argv, no, profile);
}
#endif

#ifndef FABRICD
/* net => "[no] net WORD" */
DEFUN_CMD_FUNC_DECL(net)
#define funcdecl_net static int net_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * net)
funcdecl_net;
DEFUN_CMD_FUNC_TEXT(net)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *net = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "net")) {
			net = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!net) {
		vty_out(vty, "Internal CLI error [%s]\n", "net");
		return CMD_WARNING;
	}

	return net_magic(self, vty, argc, argv, no, net);
}
#endif

#ifndef FABRICD
/* is_type => "is-type <level-1|level-1-2|level-2-only>$level" */
DEFUN_CMD_FUNC_DECL(is_type)
#define funcdecl_is_type static int is_type_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level)
funcdecl_is_type;
DEFUN_CMD_FUNC_TEXT(is_type)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!level) {
		vty_out(vty, "Internal CLI error [%s]\n", "level");
		return CMD_WARNING;
	}

	return is_type_magic(self, vty, argc, argv, level);
}
#endif

#ifndef FABRICD
/* no_is_type => "no is-type [<level-1|level-1-2|level-2-only>]" */
DEFUN_CMD_FUNC_DECL(no_is_type)
#define funcdecl_no_is_type static int no_is_type_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_is_type;
DEFUN_CMD_FUNC_TEXT(no_is_type)
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

	return no_is_type_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* dynamic_hostname => "[no] hostname dynamic" */
DEFUN_CMD_FUNC_DECL(dynamic_hostname)
#define funcdecl_dynamic_hostname static int dynamic_hostname_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_dynamic_hostname;
DEFUN_CMD_FUNC_TEXT(dynamic_hostname)
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

	return dynamic_hostname_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* set_overload_bit => "[no] set-overload-bit" */
DEFUN_CMD_FUNC_DECL(set_overload_bit)
#define funcdecl_set_overload_bit static int set_overload_bit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_set_overload_bit;
DEFUN_CMD_FUNC_TEXT(set_overload_bit)
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

	return set_overload_bit_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* set_overload_bit_on_startup => "set-overload-bit on-startup (0-86400)$val" */
DEFUN_CMD_FUNC_DECL(set_overload_bit_on_startup)
#define funcdecl_set_overload_bit_on_startup static int set_overload_bit_on_startup_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long val,\
	const char * val_str __attribute__ ((unused)))
funcdecl_set_overload_bit_on_startup;
DEFUN_CMD_FUNC_TEXT(set_overload_bit_on_startup)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long val = 0;
	const char *val_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "val")) {
			val_str = argv[_i]->arg;
			char *_end;
			val = strtol(argv[_i]->arg, &_end, 10);
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
	if (!val_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "val_str");
		return CMD_WARNING;
	}

	return set_overload_bit_on_startup_magic(self, vty, argc, argv, val, val_str);
}
#endif

#ifndef FABRICD
/* no_set_overload_bit_on_startup => "no set-overload-bit on-startup [(0-86400)$val]" */
DEFUN_CMD_FUNC_DECL(no_set_overload_bit_on_startup)
#define funcdecl_no_set_overload_bit_on_startup static int no_set_overload_bit_on_startup_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long val,\
	const char * val_str __attribute__ ((unused)))
funcdecl_no_set_overload_bit_on_startup;
DEFUN_CMD_FUNC_TEXT(no_set_overload_bit_on_startup)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long val = 0;
	const char *val_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "val")) {
			val_str = argv[_i]->arg;
			char *_end;
			val = strtol(argv[_i]->arg, &_end, 10);
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

	return no_set_overload_bit_on_startup_magic(self, vty, argc, argv, val, val_str);
}
#endif

#ifndef FABRICD
/* attached_bit_send => "[no] attached-bit send" */
DEFUN_CMD_FUNC_DECL(attached_bit_send)
#define funcdecl_attached_bit_send static int attached_bit_send_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_attached_bit_send;
DEFUN_CMD_FUNC_TEXT(attached_bit_send)
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

	return attached_bit_send_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* attached_bit_receive_ignore => "[no] attached-bit receive ignore" */
DEFUN_CMD_FUNC_DECL(attached_bit_receive_ignore)
#define funcdecl_attached_bit_receive_ignore static int attached_bit_receive_ignore_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_attached_bit_receive_ignore;
DEFUN_CMD_FUNC_TEXT(attached_bit_receive_ignore)
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

	return attached_bit_receive_ignore_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* metric_style => "metric-style <narrow|transition|wide>$style" */
DEFUN_CMD_FUNC_DECL(metric_style)
#define funcdecl_metric_style static int metric_style_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * style)
funcdecl_metric_style;
DEFUN_CMD_FUNC_TEXT(metric_style)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *style = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "style")) {
			style = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!style) {
		vty_out(vty, "Internal CLI error [%s]\n", "style");
		return CMD_WARNING;
	}

	return metric_style_magic(self, vty, argc, argv, style);
}
#endif

#ifndef FABRICD
/* no_metric_style => "no metric-style [narrow|transition|wide]" */
DEFUN_CMD_FUNC_DECL(no_metric_style)
#define funcdecl_no_metric_style static int no_metric_style_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_metric_style;
DEFUN_CMD_FUNC_TEXT(no_metric_style)
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

	return no_metric_style_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* area_passwd => "area-password <clear|md5>$pwd_type WORD$pwd [authenticate snp <send-only|validate>$snp]" */
DEFUN_CMD_FUNC_DECL(area_passwd)
#define funcdecl_area_passwd static int area_passwd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * pwd_type,\
	const char * pwd,\
	const char * snp)
funcdecl_area_passwd;
DEFUN_CMD_FUNC_TEXT(area_passwd)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *pwd_type = NULL;
	const char *pwd = NULL;
	const char *snp = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "pwd_type")) {
			pwd_type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "pwd")) {
			pwd = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "snp")) {
			snp = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!pwd_type) {
		vty_out(vty, "Internal CLI error [%s]\n", "pwd_type");
		return CMD_WARNING;
	}
	if (!pwd) {
		vty_out(vty, "Internal CLI error [%s]\n", "pwd");
		return CMD_WARNING;
	}

	return area_passwd_magic(self, vty, argc, argv, pwd_type, pwd, snp);
}
#endif

#ifndef FABRICD
/* domain_passwd => "domain-password <clear|md5>$pwd_type WORD$pwd [authenticate snp <send-only|validate>$snp]" */
DEFUN_CMD_FUNC_DECL(domain_passwd)
#define funcdecl_domain_passwd static int domain_passwd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * pwd_type,\
	const char * pwd,\
	const char * snp)
funcdecl_domain_passwd;
DEFUN_CMD_FUNC_TEXT(domain_passwd)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *pwd_type = NULL;
	const char *pwd = NULL;
	const char *snp = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "pwd_type")) {
			pwd_type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "pwd")) {
			pwd = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "snp")) {
			snp = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!pwd_type) {
		vty_out(vty, "Internal CLI error [%s]\n", "pwd_type");
		return CMD_WARNING;
	}
	if (!pwd) {
		vty_out(vty, "Internal CLI error [%s]\n", "pwd");
		return CMD_WARNING;
	}

	return domain_passwd_magic(self, vty, argc, argv, pwd_type, pwd, snp);
}
#endif

#ifndef FABRICD
/* no_area_passwd => "no <area-password|domain-password>$cmd" */
DEFUN_CMD_FUNC_DECL(no_area_passwd)
#define funcdecl_no_area_passwd static int no_area_passwd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * cmd)
funcdecl_no_area_passwd;
DEFUN_CMD_FUNC_TEXT(no_area_passwd)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *cmd = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "cmd")) {
			cmd = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!cmd) {
		vty_out(vty, "Internal CLI error [%s]\n", "cmd");
		return CMD_WARNING;
	}

	return no_area_passwd_magic(self, vty, argc, argv, cmd);
}
#endif

#ifndef FABRICD
/* lsp_gen_interval => "lsp-gen-interval [level-1|level-2]$level (1-120)$val" */
DEFUN_CMD_FUNC_DECL(lsp_gen_interval)
#define funcdecl_lsp_gen_interval static int lsp_gen_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level,\
	long val,\
	const char * val_str __attribute__ ((unused)))
funcdecl_lsp_gen_interval;
DEFUN_CMD_FUNC_TEXT(lsp_gen_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;
	long val = 0;
	const char *val_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "val")) {
			val_str = argv[_i]->arg;
			char *_end;
			val = strtol(argv[_i]->arg, &_end, 10);
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
	if (!val_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "val_str");
		return CMD_WARNING;
	}

	return lsp_gen_interval_magic(self, vty, argc, argv, level, val, val_str);
}
#endif

#ifndef FABRICD
/* no_lsp_gen_interval => "no lsp-gen-interval [level-1|level-2]$level [(1-120)]" */
DEFUN_CMD_FUNC_DECL(no_lsp_gen_interval)
#define funcdecl_no_lsp_gen_interval static int no_lsp_gen_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level)
funcdecl_no_lsp_gen_interval;
DEFUN_CMD_FUNC_TEXT(no_lsp_gen_interval)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_lsp_gen_interval_magic(self, vty, argc, argv, level);
}
#endif

#ifndef FABRICD
/* lsp_refresh_interval => "lsp-refresh-interval [level-1|level-2]$level (1-65235)$val" */
DEFUN_CMD_FUNC_DECL(lsp_refresh_interval)
#define funcdecl_lsp_refresh_interval static int lsp_refresh_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level,\
	long val,\
	const char * val_str __attribute__ ((unused)))
funcdecl_lsp_refresh_interval;
DEFUN_CMD_FUNC_TEXT(lsp_refresh_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;
	long val = 0;
	const char *val_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "val")) {
			val_str = argv[_i]->arg;
			char *_end;
			val = strtol(argv[_i]->arg, &_end, 10);
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
	if (!val_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "val_str");
		return CMD_WARNING;
	}

	return lsp_refresh_interval_magic(self, vty, argc, argv, level, val, val_str);
}
#endif

#ifndef FABRICD
/* no_lsp_refresh_interval => "no lsp-refresh-interval [level-1|level-2]$level [(1-65235)]" */
DEFUN_CMD_FUNC_DECL(no_lsp_refresh_interval)
#define funcdecl_no_lsp_refresh_interval static int no_lsp_refresh_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level)
funcdecl_no_lsp_refresh_interval;
DEFUN_CMD_FUNC_TEXT(no_lsp_refresh_interval)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_lsp_refresh_interval_magic(self, vty, argc, argv, level);
}
#endif

#ifndef FABRICD
/* max_lsp_lifetime => "max-lsp-lifetime [level-1|level-2]$level (350-65535)$val" */
DEFUN_CMD_FUNC_DECL(max_lsp_lifetime)
#define funcdecl_max_lsp_lifetime static int max_lsp_lifetime_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level,\
	long val,\
	const char * val_str __attribute__ ((unused)))
funcdecl_max_lsp_lifetime;
DEFUN_CMD_FUNC_TEXT(max_lsp_lifetime)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;
	long val = 0;
	const char *val_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "val")) {
			val_str = argv[_i]->arg;
			char *_end;
			val = strtol(argv[_i]->arg, &_end, 10);
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
	if (!val_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "val_str");
		return CMD_WARNING;
	}

	return max_lsp_lifetime_magic(self, vty, argc, argv, level, val, val_str);
}
#endif

#ifndef FABRICD
/* no_max_lsp_lifetime => "no max-lsp-lifetime [level-1|level-2]$level [(350-65535)]" */
DEFUN_CMD_FUNC_DECL(no_max_lsp_lifetime)
#define funcdecl_no_max_lsp_lifetime static int no_max_lsp_lifetime_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level)
funcdecl_no_max_lsp_lifetime;
DEFUN_CMD_FUNC_TEXT(no_max_lsp_lifetime)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_max_lsp_lifetime_magic(self, vty, argc, argv, level);
}
#endif

#ifndef FABRICD
/* lsp_timers => "lsp-timers [level-1|level-2]$level gen-interval (1-120)$gen refresh-interval (1-65235)$refresh max-lifetime (350-65535)$lifetime" */
DEFUN_CMD_FUNC_DECL(lsp_timers)
#define funcdecl_lsp_timers static int lsp_timers_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level,\
	long gen,\
	const char * gen_str __attribute__ ((unused)),\
	long refresh,\
	const char * refresh_str __attribute__ ((unused)),\
	long lifetime,\
	const char * lifetime_str __attribute__ ((unused)))
funcdecl_lsp_timers;
DEFUN_CMD_FUNC_TEXT(lsp_timers)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;
	long gen = 0;
	const char *gen_str = NULL;
	long refresh = 0;
	const char *refresh_str = NULL;
	long lifetime = 0;
	const char *lifetime_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "gen")) {
			gen_str = argv[_i]->arg;
			char *_end;
			gen = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "refresh")) {
			refresh_str = argv[_i]->arg;
			char *_end;
			refresh = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "lifetime")) {
			lifetime_str = argv[_i]->arg;
			char *_end;
			lifetime = strtol(argv[_i]->arg, &_end, 10);
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
	if (!gen_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "gen_str");
		return CMD_WARNING;
	}
	if (!refresh_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "refresh_str");
		return CMD_WARNING;
	}
	if (!lifetime_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "lifetime_str");
		return CMD_WARNING;
	}

	return lsp_timers_magic(self, vty, argc, argv, level, gen, gen_str, refresh, refresh_str, lifetime, lifetime_str);
}
#endif

#ifndef FABRICD
/* no_lsp_timers => "no lsp-timers [level-1|level-2]$level [gen-interval (1-120) refresh-interval (1-65235) max-lifetime (350-65535)]" */
DEFUN_CMD_FUNC_DECL(no_lsp_timers)
#define funcdecl_no_lsp_timers static int no_lsp_timers_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level,\
	long gen_interval,\
	const char * gen_interval_str __attribute__ ((unused)),\
	long refresh_interval,\
	const char * refresh_interval_str __attribute__ ((unused)),\
	long max_lifetime,\
	const char * max_lifetime_str __attribute__ ((unused)))
funcdecl_no_lsp_timers;
DEFUN_CMD_FUNC_TEXT(no_lsp_timers)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;
	long gen_interval = 0;
	const char *gen_interval_str = NULL;
	long refresh_interval = 0;
	const char *refresh_interval_str = NULL;
	long max_lifetime = 0;
	const char *max_lifetime_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "gen_interval")) {
			gen_interval_str = argv[_i]->arg;
			char *_end;
			gen_interval = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "refresh_interval")) {
			refresh_interval_str = argv[_i]->arg;
			char *_end;
			refresh_interval = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "max_lifetime")) {
			max_lifetime_str = argv[_i]->arg;
			char *_end;
			max_lifetime = strtol(argv[_i]->arg, &_end, 10);
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

	return no_lsp_timers_magic(self, vty, argc, argv, level, gen_interval, gen_interval_str, refresh_interval, refresh_interval_str, max_lifetime, max_lifetime_str);
}
#endif

#ifndef FABRICD
/* area_lsp_mtu => "lsp-mtu (128-4352)$val" */
DEFUN_CMD_FUNC_DECL(area_lsp_mtu)
#define funcdecl_area_lsp_mtu static int area_lsp_mtu_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long val,\
	const char * val_str __attribute__ ((unused)))
funcdecl_area_lsp_mtu;
DEFUN_CMD_FUNC_TEXT(area_lsp_mtu)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long val = 0;
	const char *val_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "val")) {
			val_str = argv[_i]->arg;
			char *_end;
			val = strtol(argv[_i]->arg, &_end, 10);
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
	if (!val_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "val_str");
		return CMD_WARNING;
	}

	return area_lsp_mtu_magic(self, vty, argc, argv, val, val_str);
}
#endif

#ifndef FABRICD
/* no_area_lsp_mtu => "no lsp-mtu [(128-4352)]" */
DEFUN_CMD_FUNC_DECL(no_area_lsp_mtu)
#define funcdecl_no_area_lsp_mtu static int no_area_lsp_mtu_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long lsp_mtu,\
	const char * lsp_mtu_str __attribute__ ((unused)))
funcdecl_no_area_lsp_mtu;
DEFUN_CMD_FUNC_TEXT(no_area_lsp_mtu)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long lsp_mtu = 0;
	const char *lsp_mtu_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "lsp_mtu")) {
			lsp_mtu_str = argv[_i]->arg;
			char *_end;
			lsp_mtu = strtol(argv[_i]->arg, &_end, 10);
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

	return no_area_lsp_mtu_magic(self, vty, argc, argv, lsp_mtu, lsp_mtu_str);
}
#endif

#ifndef FABRICD
/* spf_interval => "spf-interval [level-1|level-2]$level (1-120)$val" */
DEFUN_CMD_FUNC_DECL(spf_interval)
#define funcdecl_spf_interval static int spf_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level,\
	long val,\
	const char * val_str __attribute__ ((unused)))
funcdecl_spf_interval;
DEFUN_CMD_FUNC_TEXT(spf_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;
	long val = 0;
	const char *val_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "val")) {
			val_str = argv[_i]->arg;
			char *_end;
			val = strtol(argv[_i]->arg, &_end, 10);
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
	if (!val_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "val_str");
		return CMD_WARNING;
	}

	return spf_interval_magic(self, vty, argc, argv, level, val, val_str);
}
#endif

#ifndef FABRICD
/* no_spf_interval => "no spf-interval [level-1|level-2]$level [(1-120)]" */
DEFUN_CMD_FUNC_DECL(no_spf_interval)
#define funcdecl_no_spf_interval static int no_spf_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level)
funcdecl_no_spf_interval;
DEFUN_CMD_FUNC_TEXT(no_spf_interval)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_spf_interval_magic(self, vty, argc, argv, level);
}
#endif

#ifndef FABRICD
/* spf_delay_ietf => "spf-delay-ietf init-delay (0-60000) short-delay (0-60000) long-delay (0-60000) holddown (0-60000) time-to-learn (0-60000)" */
DEFUN_CMD_FUNC_DECL(spf_delay_ietf)
#define funcdecl_spf_delay_ietf static int spf_delay_ietf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long init_delay,\
	const char * init_delay_str __attribute__ ((unused)),\
	long short_delay,\
	const char * short_delay_str __attribute__ ((unused)),\
	long long_delay,\
	const char * long_delay_str __attribute__ ((unused)),\
	long holddown,\
	const char * holddown_str __attribute__ ((unused)),\
	long time_to_learn,\
	const char * time_to_learn_str __attribute__ ((unused)))
funcdecl_spf_delay_ietf;
DEFUN_CMD_FUNC_TEXT(spf_delay_ietf)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long init_delay = 0;
	const char *init_delay_str = NULL;
	long short_delay = 0;
	const char *short_delay_str = NULL;
	long long_delay = 0;
	const char *long_delay_str = NULL;
	long holddown = 0;
	const char *holddown_str = NULL;
	long time_to_learn = 0;
	const char *time_to_learn_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "init_delay")) {
			init_delay_str = argv[_i]->arg;
			char *_end;
			init_delay = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "short_delay")) {
			short_delay_str = argv[_i]->arg;
			char *_end;
			short_delay = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "long_delay")) {
			long_delay_str = argv[_i]->arg;
			char *_end;
			long_delay = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "holddown")) {
			holddown_str = argv[_i]->arg;
			char *_end;
			holddown = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "time_to_learn")) {
			time_to_learn_str = argv[_i]->arg;
			char *_end;
			time_to_learn = strtol(argv[_i]->arg, &_end, 10);
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
	if (!init_delay_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "init_delay_str");
		return CMD_WARNING;
	}
	if (!short_delay_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "short_delay_str");
		return CMD_WARNING;
	}
	if (!long_delay_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "long_delay_str");
		return CMD_WARNING;
	}
	if (!holddown_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "holddown_str");
		return CMD_WARNING;
	}
	if (!time_to_learn_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "time_to_learn_str");
		return CMD_WARNING;
	}

	return spf_delay_ietf_magic(self, vty, argc, argv, init_delay, init_delay_str, short_delay, short_delay_str, long_delay, long_delay_str, holddown, holddown_str, time_to_learn, time_to_learn_str);
}
#endif

#ifndef FABRICD
/* no_spf_delay_ietf => "no spf-delay-ietf [init-delay (0-60000) short-delay (0-60000) long-delay (0-60000) holddown (0-60000) time-to-learn (0-60000)]" */
DEFUN_CMD_FUNC_DECL(no_spf_delay_ietf)
#define funcdecl_no_spf_delay_ietf static int no_spf_delay_ietf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long init_delay,\
	const char * init_delay_str __attribute__ ((unused)),\
	long short_delay,\
	const char * short_delay_str __attribute__ ((unused)),\
	long long_delay,\
	const char * long_delay_str __attribute__ ((unused)),\
	long holddown,\
	const char * holddown_str __attribute__ ((unused)),\
	long time_to_learn,\
	const char * time_to_learn_str __attribute__ ((unused)))
funcdecl_no_spf_delay_ietf;
DEFUN_CMD_FUNC_TEXT(no_spf_delay_ietf)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long init_delay = 0;
	const char *init_delay_str = NULL;
	long short_delay = 0;
	const char *short_delay_str = NULL;
	long long_delay = 0;
	const char *long_delay_str = NULL;
	long holddown = 0;
	const char *holddown_str = NULL;
	long time_to_learn = 0;
	const char *time_to_learn_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "init_delay")) {
			init_delay_str = argv[_i]->arg;
			char *_end;
			init_delay = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "short_delay")) {
			short_delay_str = argv[_i]->arg;
			char *_end;
			short_delay = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "long_delay")) {
			long_delay_str = argv[_i]->arg;
			char *_end;
			long_delay = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "holddown")) {
			holddown_str = argv[_i]->arg;
			char *_end;
			holddown = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "time_to_learn")) {
			time_to_learn_str = argv[_i]->arg;
			char *_end;
			time_to_learn = strtol(argv[_i]->arg, &_end, 10);
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

	return no_spf_delay_ietf_magic(self, vty, argc, argv, init_delay, init_delay_str, short_delay, short_delay_str, long_delay, long_delay_str, holddown, holddown_str, time_to_learn, time_to_learn_str);
}
#endif

#ifndef FABRICD
/* spf_prefix_priority => "spf prefix-priority <critical|high|medium>$priority ACCESSLIST_NAME$acl_name" */
DEFUN_CMD_FUNC_DECL(spf_prefix_priority)
#define funcdecl_spf_prefix_priority static int spf_prefix_priority_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * priority,\
	const char * acl_name)
funcdecl_spf_prefix_priority;
DEFUN_CMD_FUNC_TEXT(spf_prefix_priority)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *priority = NULL;
	const char *acl_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "priority")) {
			priority = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "acl_name")) {
			acl_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!priority) {
		vty_out(vty, "Internal CLI error [%s]\n", "priority");
		return CMD_WARNING;
	}
	if (!acl_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "acl_name");
		return CMD_WARNING;
	}

	return spf_prefix_priority_magic(self, vty, argc, argv, priority, acl_name);
}
#endif

#ifndef FABRICD
/* no_spf_prefix_priority => "no spf prefix-priority <critical|high|medium>$priority [ACCESSLIST_NAME]" */
DEFUN_CMD_FUNC_DECL(no_spf_prefix_priority)
#define funcdecl_no_spf_prefix_priority static int no_spf_prefix_priority_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * priority,\
	const char * accesslist_name)
funcdecl_no_spf_prefix_priority;
DEFUN_CMD_FUNC_TEXT(no_spf_prefix_priority)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *priority = NULL;
	const char *accesslist_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "priority")) {
			priority = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "accesslist_name")) {
			accesslist_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!priority) {
		vty_out(vty, "Internal CLI error [%s]\n", "priority");
		return CMD_WARNING;
	}

	return no_spf_prefix_priority_magic(self, vty, argc, argv, priority, accesslist_name);
}
#endif

#ifndef FABRICD
/* area_purge_originator => "[no] purge-originator" */
DEFUN_CMD_FUNC_DECL(area_purge_originator)
#define funcdecl_area_purge_originator static int area_purge_originator_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_area_purge_originator;
DEFUN_CMD_FUNC_TEXT(area_purge_originator)
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

	return area_purge_originator_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* isis_mpls_te_on => "mpls-te on" */
DEFUN_CMD_FUNC_DECL(isis_mpls_te_on)
#define funcdecl_isis_mpls_te_on static int isis_mpls_te_on_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_isis_mpls_te_on;
DEFUN_CMD_FUNC_TEXT(isis_mpls_te_on)
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

	return isis_mpls_te_on_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* no_isis_mpls_te_on => "no mpls-te [on]" */
DEFUN_CMD_FUNC_DECL(no_isis_mpls_te_on)
#define funcdecl_no_isis_mpls_te_on static int no_isis_mpls_te_on_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_isis_mpls_te_on;
DEFUN_CMD_FUNC_TEXT(no_isis_mpls_te_on)
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

	return no_isis_mpls_te_on_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* isis_mpls_te_router_addr => "mpls-te router-address A.B.C.D" */
DEFUN_CMD_FUNC_DECL(isis_mpls_te_router_addr)
#define funcdecl_isis_mpls_te_router_addr static int isis_mpls_te_router_addr_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr router_address,\
	const char * router_address_str __attribute__ ((unused)))
funcdecl_isis_mpls_te_router_addr;
DEFUN_CMD_FUNC_TEXT(isis_mpls_te_router_addr)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr router_address = { INADDR_ANY };
	const char *router_address_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "router_address")) {
			router_address_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &router_address);
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
	if (!router_address_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "router_address_str");
		return CMD_WARNING;
	}

	return isis_mpls_te_router_addr_magic(self, vty, argc, argv, router_address, router_address_str);
}
#endif

#ifndef FABRICD
/* no_isis_mpls_te_router_addr => "no mpls-te router-address [A.B.C.D]" */
DEFUN_CMD_FUNC_DECL(no_isis_mpls_te_router_addr)
#define funcdecl_no_isis_mpls_te_router_addr static int no_isis_mpls_te_router_addr_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr router_address,\
	const char * router_address_str __attribute__ ((unused)))
funcdecl_no_isis_mpls_te_router_addr;
DEFUN_CMD_FUNC_TEXT(no_isis_mpls_te_router_addr)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr router_address = { INADDR_ANY };
	const char *router_address_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "router_address")) {
			router_address_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &router_address);
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

	return no_isis_mpls_te_router_addr_magic(self, vty, argc, argv, router_address, router_address_str);
}
#endif

#ifndef FABRICD
/* isis_mpls_te_router_addr_v6 => "mpls-te router-address ipv6 X:X::X:X" */
DEFUN_CMD_FUNC_DECL(isis_mpls_te_router_addr_v6)
#define funcdecl_isis_mpls_te_router_addr_v6 static int isis_mpls_te_router_addr_v6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr ipv6,\
	const char * ipv6_str __attribute__ ((unused)))
funcdecl_isis_mpls_te_router_addr_v6;
DEFUN_CMD_FUNC_TEXT(isis_mpls_te_router_addr_v6)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr ipv6 = {};
	const char *ipv6_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ipv6")) {
			ipv6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &ipv6);
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
	if (!ipv6_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "ipv6_str");
		return CMD_WARNING;
	}

	return isis_mpls_te_router_addr_v6_magic(self, vty, argc, argv, ipv6, ipv6_str);
}
#endif

#ifndef FABRICD
/* no_isis_mpls_te_router_addr_v6 => "no mpls-te router-address ipv6 [X:X::X:X]" */
DEFUN_CMD_FUNC_DECL(no_isis_mpls_te_router_addr_v6)
#define funcdecl_no_isis_mpls_te_router_addr_v6 static int no_isis_mpls_te_router_addr_v6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr ipv6,\
	const char * ipv6_str __attribute__ ((unused)))
funcdecl_no_isis_mpls_te_router_addr_v6;
DEFUN_CMD_FUNC_TEXT(no_isis_mpls_te_router_addr_v6)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr ipv6 = {};
	const char *ipv6_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ipv6")) {
			ipv6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &ipv6);
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

	return no_isis_mpls_te_router_addr_v6_magic(self, vty, argc, argv, ipv6, ipv6_str);
}
#endif

#ifndef FABRICD
/* isis_mpls_te_inter_as => "[no] mpls-te inter-as [level-1|level-1-2|level-2-only]" */
DEFUN_CMD_FUNC_DECL(isis_mpls_te_inter_as)
#define funcdecl_isis_mpls_te_inter_as static int isis_mpls_te_inter_as_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_isis_mpls_te_inter_as;
DEFUN_CMD_FUNC_TEXT(isis_mpls_te_inter_as)
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

	return isis_mpls_te_inter_as_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* isis_mpls_te_export => "mpls-te export" */
DEFUN_CMD_FUNC_DECL(isis_mpls_te_export)
#define funcdecl_isis_mpls_te_export static int isis_mpls_te_export_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_isis_mpls_te_export;
DEFUN_CMD_FUNC_TEXT(isis_mpls_te_export)
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

	return isis_mpls_te_export_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* no_isis_mpls_te_export => "no mpls-te export" */
DEFUN_CMD_FUNC_DECL(no_isis_mpls_te_export)
#define funcdecl_no_isis_mpls_te_export static int no_isis_mpls_te_export_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_isis_mpls_te_export;
DEFUN_CMD_FUNC_TEXT(no_isis_mpls_te_export)
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

	return no_isis_mpls_te_export_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* isis_default_originate => "[no] default-information originate <ipv4|ipv6>$ip <level-1|level-2>$level [always]$always [{metric (0-16777215)$metric|route-map RMAP_NAME$rmap}]" */
DEFUN_CMD_FUNC_DECL(isis_default_originate)
#define funcdecl_isis_default_originate static int isis_default_originate_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * ip,\
	const char * level,\
	const char * always,\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	const char * rmap)
funcdecl_isis_default_originate;
DEFUN_CMD_FUNC_TEXT(isis_default_originate)
{
#if 6 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *ip = NULL;
	const char *level = NULL;
	const char *always = NULL;
	long metric = 0;
	const char *metric_str = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ip")) {
			ip = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "always")) {
			always = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!ip) {
		vty_out(vty, "Internal CLI error [%s]\n", "ip");
		return CMD_WARNING;
	}
	if (!level) {
		vty_out(vty, "Internal CLI error [%s]\n", "level");
		return CMD_WARNING;
	}

	return isis_default_originate_magic(self, vty, argc, argv, no, ip, level, always, metric, metric_str, rmap);
}
#endif

#ifndef FABRICD
/* isis_redistribute => "[no] redistribute <ipv4$ip <kernel|connected|static|rip|ospf|bgp|eigrp|nhrp|table|vnc|babel|sharp|openfabric>$proto|ipv6$ip <kernel|connected|static|ripng|ospf6|bgp|nhrp|table|vnc|babel|sharp|openfabric>$proto> <level-1|level-2>$level[{metric (0-16777215)|route-map RMAP_NAME$route_map}]" */
DEFUN_CMD_FUNC_DECL(isis_redistribute)
#define funcdecl_isis_redistribute static int isis_redistribute_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * ip,\
	const char * proto,\
	const char * level,\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	const char * route_map)
funcdecl_isis_redistribute;
DEFUN_CMD_FUNC_TEXT(isis_redistribute)
{
#if 6 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *ip = NULL;
	const char *proto = NULL;
	const char *level = NULL;
	long metric = 0;
	const char *metric_str = NULL;
	const char *route_map = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ip")) {
			ip = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "route_map")) {
			route_map = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!ip) {
		vty_out(vty, "Internal CLI error [%s]\n", "ip");
		return CMD_WARNING;
	}
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}
	if (!level) {
		vty_out(vty, "Internal CLI error [%s]\n", "level");
		return CMD_WARNING;
	}

	return isis_redistribute_magic(self, vty, argc, argv, no, ip, proto, level, metric, metric_str, route_map);
}
#endif

#ifndef FABRICD
/* isis_topology => "[no] topology <standard|ipv4-unicast|ipv4-mgmt|ipv6-unicast|ipv4-multicast|ipv6-multicast|ipv6-mgmt|ipv6-dstsrc>$topology [overload]$overload" */
DEFUN_CMD_FUNC_DECL(isis_topology)
#define funcdecl_isis_topology static int isis_topology_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * topology,\
	const char * overload)
funcdecl_isis_topology;
DEFUN_CMD_FUNC_TEXT(isis_topology)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *topology = NULL;
	const char *overload = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "topology")) {
			topology = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "overload")) {
			overload = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!topology) {
		vty_out(vty, "Internal CLI error [%s]\n", "topology");
		return CMD_WARNING;
	}

	return isis_topology_magic(self, vty, argc, argv, no, topology, overload);
}
#endif

#ifndef FABRICD
/* isis_sr_enable => "segment-routing on" */
DEFUN_CMD_FUNC_DECL(isis_sr_enable)
#define funcdecl_isis_sr_enable static int isis_sr_enable_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_isis_sr_enable;
DEFUN_CMD_FUNC_TEXT(isis_sr_enable)
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

	return isis_sr_enable_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* no_isis_sr_enable => "no segment-routing [on]" */
DEFUN_CMD_FUNC_DECL(no_isis_sr_enable)
#define funcdecl_no_isis_sr_enable static int no_isis_sr_enable_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_isis_sr_enable;
DEFUN_CMD_FUNC_TEXT(no_isis_sr_enable)
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

	return no_isis_sr_enable_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* isis_sr_global_block_label_range => "segment-routing global-block (16-1048575)$gb_lower_bound (16-1048575)$gb_upper_bound [local-block (16-1048575)$lb_lower_bound (16-1048575)$lb_upper_bound]" */
DEFUN_CMD_FUNC_DECL(isis_sr_global_block_label_range)
#define funcdecl_isis_sr_global_block_label_range static int isis_sr_global_block_label_range_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long gb_lower_bound,\
	const char * gb_lower_bound_str __attribute__ ((unused)),\
	long gb_upper_bound,\
	const char * gb_upper_bound_str __attribute__ ((unused)),\
	long lb_lower_bound,\
	const char * lb_lower_bound_str __attribute__ ((unused)),\
	long lb_upper_bound,\
	const char * lb_upper_bound_str __attribute__ ((unused)))
funcdecl_isis_sr_global_block_label_range;
DEFUN_CMD_FUNC_TEXT(isis_sr_global_block_label_range)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long gb_lower_bound = 0;
	const char *gb_lower_bound_str = NULL;
	long gb_upper_bound = 0;
	const char *gb_upper_bound_str = NULL;
	long lb_lower_bound = 0;
	const char *lb_lower_bound_str = NULL;
	long lb_upper_bound = 0;
	const char *lb_upper_bound_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "gb_lower_bound")) {
			gb_lower_bound_str = argv[_i]->arg;
			char *_end;
			gb_lower_bound = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "gb_upper_bound")) {
			gb_upper_bound_str = argv[_i]->arg;
			char *_end;
			gb_upper_bound = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "lb_lower_bound")) {
			lb_lower_bound_str = argv[_i]->arg;
			char *_end;
			lb_lower_bound = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "lb_upper_bound")) {
			lb_upper_bound_str = argv[_i]->arg;
			char *_end;
			lb_upper_bound = strtol(argv[_i]->arg, &_end, 10);
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
	if (!gb_lower_bound_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "gb_lower_bound_str");
		return CMD_WARNING;
	}
	if (!gb_upper_bound_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "gb_upper_bound_str");
		return CMD_WARNING;
	}

	return isis_sr_global_block_label_range_magic(self, vty, argc, argv, gb_lower_bound, gb_lower_bound_str, gb_upper_bound, gb_upper_bound_str, lb_lower_bound, lb_lower_bound_str, lb_upper_bound, lb_upper_bound_str);
}
#endif

#ifndef FABRICD
/* no_isis_sr_global_block_label_range => "no segment-routing global-block [(16-1048575) (16-1048575) local-block (16-1048575) (16-1048575)]" */
DEFUN_CMD_FUNC_DECL(no_isis_sr_global_block_label_range)
#define funcdecl_no_isis_sr_global_block_label_range static int no_isis_sr_global_block_label_range_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long global_block,\
	const char * global_block_str __attribute__ ((unused)),\
	long local_block,\
	const char * local_block_str __attribute__ ((unused)))
funcdecl_no_isis_sr_global_block_label_range;
DEFUN_CMD_FUNC_TEXT(no_isis_sr_global_block_label_range)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long global_block = 0;
	const char *global_block_str = NULL;
	long local_block = 0;
	const char *local_block_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "global_block")) {
			global_block_str = argv[_i]->arg;
			char *_end;
			global_block = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "local_block")) {
			local_block_str = argv[_i]->arg;
			char *_end;
			local_block = strtol(argv[_i]->arg, &_end, 10);
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

	return no_isis_sr_global_block_label_range_magic(self, vty, argc, argv, global_block, global_block_str, local_block, local_block_str);
}
#endif

#ifndef FABRICD
/* isis_sr_node_msd => "segment-routing node-msd (1-16)$msd" */
DEFUN_CMD_FUNC_DECL(isis_sr_node_msd)
#define funcdecl_isis_sr_node_msd static int isis_sr_node_msd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long msd,\
	const char * msd_str __attribute__ ((unused)))
funcdecl_isis_sr_node_msd;
DEFUN_CMD_FUNC_TEXT(isis_sr_node_msd)
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

	return isis_sr_node_msd_magic(self, vty, argc, argv, msd, msd_str);
}
#endif

#ifndef FABRICD
/* no_isis_sr_node_msd => "no segment-routing node-msd [(1-16)]" */
DEFUN_CMD_FUNC_DECL(no_isis_sr_node_msd)
#define funcdecl_no_isis_sr_node_msd static int no_isis_sr_node_msd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long node_msd,\
	const char * node_msd_str __attribute__ ((unused)))
funcdecl_no_isis_sr_node_msd;
DEFUN_CMD_FUNC_TEXT(no_isis_sr_node_msd)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long node_msd = 0;
	const char *node_msd_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "node_msd")) {
			node_msd_str = argv[_i]->arg;
			char *_end;
			node_msd = strtol(argv[_i]->arg, &_end, 10);
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

	return no_isis_sr_node_msd_magic(self, vty, argc, argv, node_msd, node_msd_str);
}
#endif

#ifndef FABRICD
/* isis_sr_prefix_sid => "segment-routing prefix          <A.B.C.D/M|X:X::X:X/M>$prefix	  <absolute$sid_type (16-1048575)$sid_value|index$sid_type (0-65535)$sid_value>	  [<no-php-flag|explicit-null>$lh_behavior] [n-flag-clear$n_flag_clear]" */
DEFUN_CMD_FUNC_DECL(isis_sr_prefix_sid)
#define funcdecl_isis_sr_prefix_sid static int isis_sr_prefix_sid_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const char * sid_type,\
	long sid_value,\
	const char * sid_value_str __attribute__ ((unused)),\
	const char * lh_behavior,\
	const char * n_flag_clear)
funcdecl_isis_sr_prefix_sid;
DEFUN_CMD_FUNC_TEXT(isis_sr_prefix_sid)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix prefix = { };
	const char *prefix_str = NULL;
	const char *sid_type = NULL;
	long sid_value = 0;
	const char *sid_value_str = NULL;
	const char *lh_behavior = NULL;
	const char *n_flag_clear = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "sid_type")) {
			sid_type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "sid_value")) {
			sid_value_str = argv[_i]->arg;
			char *_end;
			sid_value = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "lh_behavior")) {
			lh_behavior = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "n_flag_clear")) {
			n_flag_clear = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!sid_type) {
		vty_out(vty, "Internal CLI error [%s]\n", "sid_type");
		return CMD_WARNING;
	}
	if (!sid_value_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "sid_value_str");
		return CMD_WARNING;
	}

	return isis_sr_prefix_sid_magic(self, vty, argc, argv, &prefix, prefix_str, sid_type, sid_value, sid_value_str, lh_behavior, n_flag_clear);
}
#endif

#ifndef FABRICD
/* no_isis_sr_prefix_sid => "no segment-routing prefix <A.B.C.D/M|X:X::X:X/M>$prefix         [<absolute$sid_type (16-1048575)|index (0-65535)> [<no-php-flag|explicit-null>]]	 [n-flag-clear]" */
DEFUN_CMD_FUNC_DECL(no_isis_sr_prefix_sid)
#define funcdecl_no_isis_sr_prefix_sid static int no_isis_sr_prefix_sid_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const char * sid_type,\
	long absolute,\
	const char * absolute_str __attribute__ ((unused)),\
	long index,\
	const char * index_str __attribute__ ((unused)))
funcdecl_no_isis_sr_prefix_sid;
DEFUN_CMD_FUNC_TEXT(no_isis_sr_prefix_sid)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix prefix = { };
	const char *prefix_str = NULL;
	const char *sid_type = NULL;
	long absolute = 0;
	const char *absolute_str = NULL;
	long index = 0;
	const char *index_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "sid_type")) {
			sid_type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "absolute")) {
			absolute_str = argv[_i]->arg;
			char *_end;
			absolute = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "index")) {
			index_str = argv[_i]->arg;
			char *_end;
			index = strtol(argv[_i]->arg, &_end, 10);
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

	return no_isis_sr_prefix_sid_magic(self, vty, argc, argv, &prefix, prefix_str, sid_type, absolute, absolute_str, index, index_str);
}
#endif

#ifndef FABRICD
/* isis_frr_lfa_priority_limit => "[no] fast-reroute priority-limit <critical|high|medium>$priority [<level-1|level-2>$level]" */
DEFUN_CMD_FUNC_DECL(isis_frr_lfa_priority_limit)
#define funcdecl_isis_frr_lfa_priority_limit static int isis_frr_lfa_priority_limit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * priority,\
	const char * level)
funcdecl_isis_frr_lfa_priority_limit;
DEFUN_CMD_FUNC_TEXT(isis_frr_lfa_priority_limit)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *priority = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "priority")) {
			priority = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!priority) {
		vty_out(vty, "Internal CLI error [%s]\n", "priority");
		return CMD_WARNING;
	}

	return isis_frr_lfa_priority_limit_magic(self, vty, argc, argv, no, priority, level);
}
#endif

#ifndef FABRICD
/* isis_frr_lfa_tiebreaker => "[no] fast-reroute lfa          tiebreaker <downstream|lowest-backup-metric|node-protecting>$type	  index (1-255)$index	  [<level-1|level-2>$level]" */
DEFUN_CMD_FUNC_DECL(isis_frr_lfa_tiebreaker)
#define funcdecl_isis_frr_lfa_tiebreaker static int isis_frr_lfa_tiebreaker_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * type,\
	long index,\
	const char * index_str __attribute__ ((unused)),\
	const char * level)
funcdecl_isis_frr_lfa_tiebreaker;
DEFUN_CMD_FUNC_TEXT(isis_frr_lfa_tiebreaker)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *type = NULL;
	long index = 0;
	const char *index_str = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "index")) {
			index_str = argv[_i]->arg;
			char *_end;
			index = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!index_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "index_str");
		return CMD_WARNING;
	}

	return isis_frr_lfa_tiebreaker_magic(self, vty, argc, argv, no, type, index, index_str, level);
}
#endif

#ifndef FABRICD
/* isis_frr_lfa_load_sharing => "[no] fast-reroute load-sharing disable [<level-1|level-2>$level]" */
DEFUN_CMD_FUNC_DECL(isis_frr_lfa_load_sharing)
#define funcdecl_isis_frr_lfa_load_sharing static int isis_frr_lfa_load_sharing_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * level)
funcdecl_isis_frr_lfa_load_sharing;
DEFUN_CMD_FUNC_TEXT(isis_frr_lfa_load_sharing)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return isis_frr_lfa_load_sharing_magic(self, vty, argc, argv, no, level);
}
#endif

#ifndef FABRICD
/* isis_frr_remote_lfa_plist => "fast-reroute remote-lfa prefix-list WORD$plist [<level-1|level-2>$level]" */
DEFUN_CMD_FUNC_DECL(isis_frr_remote_lfa_plist)
#define funcdecl_isis_frr_remote_lfa_plist static int isis_frr_remote_lfa_plist_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * plist,\
	const char * level)
funcdecl_isis_frr_remote_lfa_plist;
DEFUN_CMD_FUNC_TEXT(isis_frr_remote_lfa_plist)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *plist = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "plist")) {
			plist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!plist) {
		vty_out(vty, "Internal CLI error [%s]\n", "plist");
		return CMD_WARNING;
	}

	return isis_frr_remote_lfa_plist_magic(self, vty, argc, argv, plist, level);
}
#endif

#ifndef FABRICD
/* no_isis_frr_remote_lfa_plist => "no fast-reroute remote-lfa prefix-list [WORD] [<level-1|level-2>$level]" */
DEFUN_CMD_FUNC_DECL(no_isis_frr_remote_lfa_plist)
#define funcdecl_no_isis_frr_remote_lfa_plist static int no_isis_frr_remote_lfa_plist_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * prefix_list,\
	const char * level)
funcdecl_no_isis_frr_remote_lfa_plist;
DEFUN_CMD_FUNC_TEXT(no_isis_frr_remote_lfa_plist)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *prefix_list = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix_list")) {
			prefix_list = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_isis_frr_remote_lfa_plist_magic(self, vty, argc, argv, prefix_list, level);
}
#endif

#ifndef FABRICD
/* isis_passive => "[no] isis passive" */
DEFUN_CMD_FUNC_DECL(isis_passive)
#define funcdecl_isis_passive static int isis_passive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_isis_passive;
DEFUN_CMD_FUNC_TEXT(isis_passive)
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

	return isis_passive_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* isis_passwd => "isis password <md5|clear>$type WORD$pwd" */
DEFUN_CMD_FUNC_DECL(isis_passwd)
#define funcdecl_isis_passwd static int isis_passwd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * type,\
	const char * pwd)
funcdecl_isis_passwd;
DEFUN_CMD_FUNC_TEXT(isis_passwd)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *type = NULL;
	const char *pwd = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "pwd")) {
			pwd = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!type) {
		vty_out(vty, "Internal CLI error [%s]\n", "type");
		return CMD_WARNING;
	}
	if (!pwd) {
		vty_out(vty, "Internal CLI error [%s]\n", "pwd");
		return CMD_WARNING;
	}

	return isis_passwd_magic(self, vty, argc, argv, type, pwd);
}
#endif

#ifndef FABRICD
/* no_isis_passwd => "no isis password [<md5|clear> WORD]" */
DEFUN_CMD_FUNC_DECL(no_isis_passwd)
#define funcdecl_no_isis_passwd static int no_isis_passwd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_isis_passwd;
DEFUN_CMD_FUNC_TEXT(no_isis_passwd)
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

	return no_isis_passwd_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* isis_metric => "isis metric [level-1|level-2]$level (0-16777215)$met" */
DEFUN_CMD_FUNC_DECL(isis_metric)
#define funcdecl_isis_metric static int isis_metric_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level,\
	long met,\
	const char * met_str __attribute__ ((unused)))
funcdecl_isis_metric;
DEFUN_CMD_FUNC_TEXT(isis_metric)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;
	long met = 0;
	const char *met_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "met")) {
			met_str = argv[_i]->arg;
			char *_end;
			met = strtol(argv[_i]->arg, &_end, 10);
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
	if (!met_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "met_str");
		return CMD_WARNING;
	}

	return isis_metric_magic(self, vty, argc, argv, level, met, met_str);
}
#endif

#ifndef FABRICD
/* no_isis_metric => "no isis metric [level-1|level-2]$level [(0-16777215)]" */
DEFUN_CMD_FUNC_DECL(no_isis_metric)
#define funcdecl_no_isis_metric static int no_isis_metric_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level)
funcdecl_no_isis_metric;
DEFUN_CMD_FUNC_TEXT(no_isis_metric)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_isis_metric_magic(self, vty, argc, argv, level);
}
#endif

#ifndef FABRICD
/* isis_hello_interval => "isis hello-interval [level-1|level-2]$level (1-600)$intv" */
DEFUN_CMD_FUNC_DECL(isis_hello_interval)
#define funcdecl_isis_hello_interval static int isis_hello_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level,\
	long intv,\
	const char * intv_str __attribute__ ((unused)))
funcdecl_isis_hello_interval;
DEFUN_CMD_FUNC_TEXT(isis_hello_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;
	long intv = 0;
	const char *intv_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "intv")) {
			intv_str = argv[_i]->arg;
			char *_end;
			intv = strtol(argv[_i]->arg, &_end, 10);
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
	if (!intv_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "intv_str");
		return CMD_WARNING;
	}

	return isis_hello_interval_magic(self, vty, argc, argv, level, intv, intv_str);
}
#endif

#ifndef FABRICD
/* no_isis_hello_interval => "no isis hello-interval [level-1|level-2]$level [(1-600)]" */
DEFUN_CMD_FUNC_DECL(no_isis_hello_interval)
#define funcdecl_no_isis_hello_interval static int no_isis_hello_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level)
funcdecl_no_isis_hello_interval;
DEFUN_CMD_FUNC_TEXT(no_isis_hello_interval)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_isis_hello_interval_magic(self, vty, argc, argv, level);
}
#endif

#ifndef FABRICD
/* isis_hello_multiplier => "isis hello-multiplier [level-1|level-2]$level (2-100)$mult" */
DEFUN_CMD_FUNC_DECL(isis_hello_multiplier)
#define funcdecl_isis_hello_multiplier static int isis_hello_multiplier_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level,\
	long mult,\
	const char * mult_str __attribute__ ((unused)))
funcdecl_isis_hello_multiplier;
DEFUN_CMD_FUNC_TEXT(isis_hello_multiplier)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;
	long mult = 0;
	const char *mult_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mult")) {
			mult_str = argv[_i]->arg;
			char *_end;
			mult = strtol(argv[_i]->arg, &_end, 10);
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
	if (!mult_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "mult_str");
		return CMD_WARNING;
	}

	return isis_hello_multiplier_magic(self, vty, argc, argv, level, mult, mult_str);
}
#endif

#ifndef FABRICD
/* no_isis_hello_multiplier => "no isis hello-multiplier [level-1|level-2]$level [(2-100)]" */
DEFUN_CMD_FUNC_DECL(no_isis_hello_multiplier)
#define funcdecl_no_isis_hello_multiplier static int no_isis_hello_multiplier_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * level)
funcdecl_no_isis_hello_multiplier;
DEFUN_CMD_FUNC_TEXT(no_isis_hello_multiplier)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_isis_hello_multiplier_magic(self, vty, argc, argv, level);
}
#endif

#ifndef FABRICD
/* isis_threeway_adj => "[no] isis three-way-handshake" */
DEFUN_CMD_FUNC_DECL(isis_threeway_adj)
#define funcdecl_isis_threeway_adj static int isis_threeway_adj_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_isis_threeway_adj;
DEFUN_CMD_FUNC_TEXT(isis_threeway_adj)
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

	return isis_threeway_adj_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* isis_hello_padding => "[no] isis hello padding" */
DEFUN_CMD_FUNC_DECL(isis_hello_padding)
#define funcdecl_isis_hello_padding static int isis_hello_padding_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_isis_hello_padding;
DEFUN_CMD_FUNC_TEXT(isis_hello_padding)
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

	return isis_hello_padding_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* csnp_interval => "isis csnp-interval (1-600)$intv [level-1|level-2]$level" */
DEFUN_CMD_FUNC_DECL(csnp_interval)
#define funcdecl_csnp_interval static int csnp_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long intv,\
	const char * intv_str __attribute__ ((unused)),\
	const char * level)
funcdecl_csnp_interval;
DEFUN_CMD_FUNC_TEXT(csnp_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long intv = 0;
	const char *intv_str = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "intv")) {
			intv_str = argv[_i]->arg;
			char *_end;
			intv = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!intv_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "intv_str");
		return CMD_WARNING;
	}

	return csnp_interval_magic(self, vty, argc, argv, intv, intv_str, level);
}
#endif

#ifndef FABRICD
/* no_csnp_interval => "no isis csnp-interval [(1-600)] [level-1|level-2]$level" */
DEFUN_CMD_FUNC_DECL(no_csnp_interval)
#define funcdecl_no_csnp_interval static int no_csnp_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long csnp_interval,\
	const char * csnp_interval_str __attribute__ ((unused)),\
	const char * level)
funcdecl_no_csnp_interval;
DEFUN_CMD_FUNC_TEXT(no_csnp_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long csnp_interval = 0;
	const char *csnp_interval_str = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "csnp_interval")) {
			csnp_interval_str = argv[_i]->arg;
			char *_end;
			csnp_interval = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_csnp_interval_magic(self, vty, argc, argv, csnp_interval, csnp_interval_str, level);
}
#endif

#ifndef FABRICD
/* psnp_interval => "isis psnp-interval (1-120)$intv [level-1|level-2]$level" */
DEFUN_CMD_FUNC_DECL(psnp_interval)
#define funcdecl_psnp_interval static int psnp_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long intv,\
	const char * intv_str __attribute__ ((unused)),\
	const char * level)
funcdecl_psnp_interval;
DEFUN_CMD_FUNC_TEXT(psnp_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long intv = 0;
	const char *intv_str = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "intv")) {
			intv_str = argv[_i]->arg;
			char *_end;
			intv = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!intv_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "intv_str");
		return CMD_WARNING;
	}

	return psnp_interval_magic(self, vty, argc, argv, intv, intv_str, level);
}
#endif

#ifndef FABRICD
/* no_psnp_interval => "no isis psnp-interval [(1-120)] [level-1|level-2]$level" */
DEFUN_CMD_FUNC_DECL(no_psnp_interval)
#define funcdecl_no_psnp_interval static int no_psnp_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long psnp_interval,\
	const char * psnp_interval_str __attribute__ ((unused)),\
	const char * level)
funcdecl_no_psnp_interval;
DEFUN_CMD_FUNC_TEXT(no_psnp_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long psnp_interval = 0;
	const char *psnp_interval_str = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "psnp_interval")) {
			psnp_interval_str = argv[_i]->arg;
			char *_end;
			psnp_interval = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_psnp_interval_magic(self, vty, argc, argv, psnp_interval, psnp_interval_str, level);
}
#endif

#ifndef FABRICD
/* circuit_topology => "[no] isis topology<standard|ipv4-unicast|ipv4-mgmt|ipv6-unicast|ipv4-multicast|ipv6-multicast|ipv6-mgmt|ipv6-dstsrc>$topology" */
DEFUN_CMD_FUNC_DECL(circuit_topology)
#define funcdecl_circuit_topology static int circuit_topology_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * topology)
funcdecl_circuit_topology;
DEFUN_CMD_FUNC_TEXT(circuit_topology)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *topology = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "topology")) {
			topology = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!topology) {
		vty_out(vty, "Internal CLI error [%s]\n", "topology");
		return CMD_WARNING;
	}

	return circuit_topology_magic(self, vty, argc, argv, no, topology);
}
#endif

#ifndef FABRICD
/* isis_circuit_type => "isis circuit-type <level-1|level-1-2|level-2-only>$type" */
DEFUN_CMD_FUNC_DECL(isis_circuit_type)
#define funcdecl_isis_circuit_type static int isis_circuit_type_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * type)
funcdecl_isis_circuit_type;
DEFUN_CMD_FUNC_TEXT(isis_circuit_type)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *type = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!type) {
		vty_out(vty, "Internal CLI error [%s]\n", "type");
		return CMD_WARNING;
	}

	return isis_circuit_type_magic(self, vty, argc, argv, type);
}
#endif

#ifndef FABRICD
/* no_isis_circuit_type => "no isis circuit-type [level-1|level-1-2|level-2-only]" */
DEFUN_CMD_FUNC_DECL(no_isis_circuit_type)
#define funcdecl_no_isis_circuit_type static int no_isis_circuit_type_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_isis_circuit_type;
DEFUN_CMD_FUNC_TEXT(no_isis_circuit_type)
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

	return no_isis_circuit_type_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* isis_network => "[no] isis network point-to-point" */
DEFUN_CMD_FUNC_DECL(isis_network)
#define funcdecl_isis_network static int isis_network_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_isis_network;
DEFUN_CMD_FUNC_TEXT(isis_network)
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

	return isis_network_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* isis_priority => "isis priority (0-127)$prio [level-1|level-2]$level" */
DEFUN_CMD_FUNC_DECL(isis_priority)
#define funcdecl_isis_priority static int isis_priority_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long prio,\
	const char * prio_str __attribute__ ((unused)),\
	const char * level)
funcdecl_isis_priority;
DEFUN_CMD_FUNC_TEXT(isis_priority)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long prio = 0;
	const char *prio_str = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prio")) {
			prio_str = argv[_i]->arg;
			char *_end;
			prio = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!prio_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prio_str");
		return CMD_WARNING;
	}

	return isis_priority_magic(self, vty, argc, argv, prio, prio_str, level);
}
#endif

#ifndef FABRICD
/* no_isis_priority => "no isis priority [(0-127)] [level-1|level-2]$level" */
DEFUN_CMD_FUNC_DECL(no_isis_priority)
#define funcdecl_no_isis_priority static int no_isis_priority_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long priority,\
	const char * priority_str __attribute__ ((unused)),\
	const char * level)
funcdecl_no_isis_priority;
DEFUN_CMD_FUNC_TEXT(no_isis_priority)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long priority = 0;
	const char *priority_str = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "priority")) {
			priority_str = argv[_i]->arg;
			char *_end;
			priority = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_isis_priority_magic(self, vty, argc, argv, priority, priority_str, level);
}
#endif

#ifndef FABRICD
/* isis_lfa => "[no] isis fast-reroute lfa [level-1|level-2]$level" */
DEFUN_CMD_FUNC_DECL(isis_lfa)
#define funcdecl_isis_lfa static int isis_lfa_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * level)
funcdecl_isis_lfa;
DEFUN_CMD_FUNC_TEXT(isis_lfa)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return isis_lfa_magic(self, vty, argc, argv, no, level);
}
#endif

#ifndef FABRICD
/* isis_lfa_exclude_interface => "[no] isis fast-reroute lfa [level-1|level-2]$level exclude interface IFNAME$ifname" */
DEFUN_CMD_FUNC_DECL(isis_lfa_exclude_interface)
#define funcdecl_isis_lfa_exclude_interface static int isis_lfa_exclude_interface_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * level,\
	const char * ifname)
funcdecl_isis_lfa_exclude_interface;
DEFUN_CMD_FUNC_TEXT(isis_lfa_exclude_interface)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *level = NULL;
	const char *ifname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
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

	return isis_lfa_exclude_interface_magic(self, vty, argc, argv, no, level, ifname);
}
#endif

#ifndef FABRICD
/* isis_remote_lfa => "[no] isis fast-reroute remote-lfa tunnel mpls-ldp [level-1|level-2]$level" */
DEFUN_CMD_FUNC_DECL(isis_remote_lfa)
#define funcdecl_isis_remote_lfa static int isis_remote_lfa_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * level)
funcdecl_isis_remote_lfa;
DEFUN_CMD_FUNC_TEXT(isis_remote_lfa)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return isis_remote_lfa_magic(self, vty, argc, argv, no, level);
}
#endif

#ifndef FABRICD
/* isis_remote_lfa_max_metric => "[no] isis fast-reroute remote-lfa maximum-metric (1-16777215)$metric [level-1|level-2]$level" */
DEFUN_CMD_FUNC_DECL(isis_remote_lfa_max_metric)
#define funcdecl_isis_remote_lfa_max_metric static int isis_remote_lfa_max_metric_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	const char * level)
funcdecl_isis_remote_lfa_max_metric;
DEFUN_CMD_FUNC_TEXT(isis_remote_lfa_max_metric)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long metric = 0;
	const char *metric_str = NULL;
	const char *level = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!metric_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "metric_str");
		return CMD_WARNING;
	}

	return isis_remote_lfa_max_metric_magic(self, vty, argc, argv, no, metric, metric_str, level);
}
#endif

#ifndef FABRICD
/* isis_ti_lfa => "[no] isis fast-reroute ti-lfa [level-1|level-2]$level [node-protection$node_protection [link-fallback$link_fallback]]" */
DEFUN_CMD_FUNC_DECL(isis_ti_lfa)
#define funcdecl_isis_ti_lfa static int isis_ti_lfa_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * level,\
	const char * node_protection,\
	const char * link_fallback)
funcdecl_isis_ti_lfa;
DEFUN_CMD_FUNC_TEXT(isis_ti_lfa)
{
#if 4 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *level = NULL;
	const char *node_protection = NULL;
	const char *link_fallback = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "level")) {
			level = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "node_protection")) {
			node_protection = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "link_fallback")) {
			link_fallback = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return isis_ti_lfa_magic(self, vty, argc, argv, no, level, node_protection, link_fallback);
}
#endif

#ifndef FABRICD
/* log_adj_changes => "[no] log-adjacency-changes" */
DEFUN_CMD_FUNC_DECL(log_adj_changes)
#define funcdecl_log_adj_changes static int log_adj_changes_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_log_adj_changes;
DEFUN_CMD_FUNC_TEXT(log_adj_changes)
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

	return log_adj_changes_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* isis_mpls_ldp_sync => "mpls ldp-sync" */
DEFUN_CMD_FUNC_DECL(isis_mpls_ldp_sync)
#define funcdecl_isis_mpls_ldp_sync static int isis_mpls_ldp_sync_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_isis_mpls_ldp_sync;
DEFUN_CMD_FUNC_TEXT(isis_mpls_ldp_sync)
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

	return isis_mpls_ldp_sync_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* no_isis_mpls_ldp_sync => "no mpls ldp-sync" */
DEFUN_CMD_FUNC_DECL(no_isis_mpls_ldp_sync)
#define funcdecl_no_isis_mpls_ldp_sync static int no_isis_mpls_ldp_sync_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_isis_mpls_ldp_sync;
DEFUN_CMD_FUNC_TEXT(no_isis_mpls_ldp_sync)
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

	return no_isis_mpls_ldp_sync_magic(self, vty, argc, argv);
}
#endif

#ifndef FABRICD
/* isis_mpls_ldp_sync_holddown => "mpls ldp-sync holddown (0-10000)" */
DEFUN_CMD_FUNC_DECL(isis_mpls_ldp_sync_holddown)
#define funcdecl_isis_mpls_ldp_sync_holddown static int isis_mpls_ldp_sync_holddown_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long holddown,\
	const char * holddown_str __attribute__ ((unused)))
funcdecl_isis_mpls_ldp_sync_holddown;
DEFUN_CMD_FUNC_TEXT(isis_mpls_ldp_sync_holddown)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long holddown = 0;
	const char *holddown_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "holddown")) {
			holddown_str = argv[_i]->arg;
			char *_end;
			holddown = strtol(argv[_i]->arg, &_end, 10);
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
	if (!holddown_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "holddown_str");
		return CMD_WARNING;
	}

	return isis_mpls_ldp_sync_holddown_magic(self, vty, argc, argv, holddown, holddown_str);
}
#endif

#ifndef FABRICD
/* no_isis_mpls_ldp_sync_holddown => "no mpls ldp-sync holddown [<(1-10000)>]" */
DEFUN_CMD_FUNC_DECL(no_isis_mpls_ldp_sync_holddown)
#define funcdecl_no_isis_mpls_ldp_sync_holddown static int no_isis_mpls_ldp_sync_holddown_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long holddown,\
	const char * holddown_str __attribute__ ((unused)))
funcdecl_no_isis_mpls_ldp_sync_holddown;
DEFUN_CMD_FUNC_TEXT(no_isis_mpls_ldp_sync_holddown)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long holddown = 0;
	const char *holddown_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "holddown")) {
			holddown_str = argv[_i]->arg;
			char *_end;
			holddown = strtol(argv[_i]->arg, &_end, 10);
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

	return no_isis_mpls_ldp_sync_holddown_magic(self, vty, argc, argv, holddown, holddown_str);
}
#endif

#ifndef FABRICD
/* isis_mpls_if_ldp_sync => "[no] isis mpls ldp-sync" */
DEFUN_CMD_FUNC_DECL(isis_mpls_if_ldp_sync)
#define funcdecl_isis_mpls_if_ldp_sync static int isis_mpls_if_ldp_sync_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_isis_mpls_if_ldp_sync;
DEFUN_CMD_FUNC_TEXT(isis_mpls_if_ldp_sync)
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

	return isis_mpls_if_ldp_sync_magic(self, vty, argc, argv, no);
}
#endif

#ifndef FABRICD
/* isis_mpls_if_ldp_sync_holddown => "isis mpls ldp-sync holddown (0-10000)" */
DEFUN_CMD_FUNC_DECL(isis_mpls_if_ldp_sync_holddown)
#define funcdecl_isis_mpls_if_ldp_sync_holddown static int isis_mpls_if_ldp_sync_holddown_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long holddown,\
	const char * holddown_str __attribute__ ((unused)))
funcdecl_isis_mpls_if_ldp_sync_holddown;
DEFUN_CMD_FUNC_TEXT(isis_mpls_if_ldp_sync_holddown)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long holddown = 0;
	const char *holddown_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "holddown")) {
			holddown_str = argv[_i]->arg;
			char *_end;
			holddown = strtol(argv[_i]->arg, &_end, 10);
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
	if (!holddown_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "holddown_str");
		return CMD_WARNING;
	}

	return isis_mpls_if_ldp_sync_holddown_magic(self, vty, argc, argv, holddown, holddown_str);
}
#endif

#ifndef FABRICD
/* no_isis_mpls_if_ldp_sync_holddown => "no isis mpls ldp-sync holddown [<(1-10000)>]" */
DEFUN_CMD_FUNC_DECL(no_isis_mpls_if_ldp_sync_holddown)
#define funcdecl_no_isis_mpls_if_ldp_sync_holddown static int no_isis_mpls_if_ldp_sync_holddown_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long holddown,\
	const char * holddown_str __attribute__ ((unused)))
funcdecl_no_isis_mpls_if_ldp_sync_holddown;
DEFUN_CMD_FUNC_TEXT(no_isis_mpls_if_ldp_sync_holddown)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long holddown = 0;
	const char *holddown_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "holddown")) {
			holddown_str = argv[_i]->arg;
			char *_end;
			holddown = strtol(argv[_i]->arg, &_end, 10);
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

	return no_isis_mpls_if_ldp_sync_holddown_magic(self, vty, argc, argv, holddown, holddown_str);
}
#endif

