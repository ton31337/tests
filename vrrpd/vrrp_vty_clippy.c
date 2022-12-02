/* vrrp_vrid => "[no] vrrp (1-255)$vrid [version (2-3)]" */
DEFUN_CMD_FUNC_DECL(vrrp_vrid)
#define funcdecl_vrrp_vrid static int vrrp_vrid_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long vrid,\
	const char * vrid_str __attribute__ ((unused)),\
	long version,\
	const char * version_str __attribute__ ((unused)))
funcdecl_vrrp_vrid;
DEFUN_CMD_FUNC_TEXT(vrrp_vrid)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long vrid = 0;
	const char *vrid_str = NULL;
	long version = 0;
	const char *version_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrid")) {
			vrid_str = argv[_i]->arg;
			char *_end;
			vrid = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "version")) {
			version_str = argv[_i]->arg;
			char *_end;
			version = strtol(argv[_i]->arg, &_end, 10);
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
	if (!vrid_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrid_str");
		return CMD_WARNING;
	}

	return vrrp_vrid_magic(self, vty, argc, argv, no, vrid, vrid_str, version, version_str);
}

/* vrrp_shutdown => "[no] vrrp (1-255)$vrid shutdown" */
DEFUN_CMD_FUNC_DECL(vrrp_shutdown)
#define funcdecl_vrrp_shutdown static int vrrp_shutdown_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long vrid,\
	const char * vrid_str __attribute__ ((unused)))
funcdecl_vrrp_shutdown;
DEFUN_CMD_FUNC_TEXT(vrrp_shutdown)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long vrid = 0;
	const char *vrid_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrid")) {
			vrid_str = argv[_i]->arg;
			char *_end;
			vrid = strtol(argv[_i]->arg, &_end, 10);
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
	if (!vrid_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrid_str");
		return CMD_WARNING;
	}

	return vrrp_shutdown_magic(self, vty, argc, argv, no, vrid, vrid_str);
}

/* vrrp_priority => "vrrp (1-255)$vrid priority (1-254)" */
DEFUN_CMD_FUNC_DECL(vrrp_priority)
#define funcdecl_vrrp_priority static int vrrp_priority_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long vrid,\
	const char * vrid_str __attribute__ ((unused)),\
	long priority,\
	const char * priority_str __attribute__ ((unused)))
funcdecl_vrrp_priority;
DEFUN_CMD_FUNC_TEXT(vrrp_priority)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long vrid = 0;
	const char *vrid_str = NULL;
	long priority = 0;
	const char *priority_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrid")) {
			vrid_str = argv[_i]->arg;
			char *_end;
			vrid = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "priority")) {
			priority_str = argv[_i]->arg;
			char *_end;
			priority = strtol(argv[_i]->arg, &_end, 10);
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
	if (!vrid_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrid_str");
		return CMD_WARNING;
	}
	if (!priority_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "priority_str");
		return CMD_WARNING;
	}

	return vrrp_priority_magic(self, vty, argc, argv, vrid, vrid_str, priority, priority_str);
}

/* no_vrrp_priority => "no vrrp (1-255)$vrid priority [(1-254)]" */
DEFUN_CMD_FUNC_DECL(no_vrrp_priority)
#define funcdecl_no_vrrp_priority static int no_vrrp_priority_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long vrid,\
	const char * vrid_str __attribute__ ((unused)),\
	long priority,\
	const char * priority_str __attribute__ ((unused)))
funcdecl_no_vrrp_priority;
DEFUN_CMD_FUNC_TEXT(no_vrrp_priority)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long vrid = 0;
	const char *vrid_str = NULL;
	long priority = 0;
	const char *priority_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrid")) {
			vrid_str = argv[_i]->arg;
			char *_end;
			vrid = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "priority")) {
			priority_str = argv[_i]->arg;
			char *_end;
			priority = strtol(argv[_i]->arg, &_end, 10);
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
	if (!vrid_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrid_str");
		return CMD_WARNING;
	}

	return no_vrrp_priority_magic(self, vty, argc, argv, vrid, vrid_str, priority, priority_str);
}

/* vrrp_advertisement_interval => "vrrp (1-255)$vrid advertisement-interval (10-40950)" */
DEFUN_CMD_FUNC_DECL(vrrp_advertisement_interval)
#define funcdecl_vrrp_advertisement_interval static int vrrp_advertisement_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long vrid,\
	const char * vrid_str __attribute__ ((unused)),\
	long advertisement_interval,\
	const char * advertisement_interval_str __attribute__ ((unused)))
funcdecl_vrrp_advertisement_interval;
DEFUN_CMD_FUNC_TEXT(vrrp_advertisement_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long vrid = 0;
	const char *vrid_str = NULL;
	long advertisement_interval = 0;
	const char *advertisement_interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrid")) {
			vrid_str = argv[_i]->arg;
			char *_end;
			vrid = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "advertisement_interval")) {
			advertisement_interval_str = argv[_i]->arg;
			char *_end;
			advertisement_interval = strtol(argv[_i]->arg, &_end, 10);
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
	if (!vrid_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrid_str");
		return CMD_WARNING;
	}
	if (!advertisement_interval_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "advertisement_interval_str");
		return CMD_WARNING;
	}

	return vrrp_advertisement_interval_magic(self, vty, argc, argv, vrid, vrid_str, advertisement_interval, advertisement_interval_str);
}

/* no_vrrp_advertisement_interval => "no vrrp (1-255)$vrid advertisement-interval [(10-40950)]" */
DEFUN_CMD_FUNC_DECL(no_vrrp_advertisement_interval)
#define funcdecl_no_vrrp_advertisement_interval static int no_vrrp_advertisement_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long vrid,\
	const char * vrid_str __attribute__ ((unused)),\
	long advertisement_interval,\
	const char * advertisement_interval_str __attribute__ ((unused)))
funcdecl_no_vrrp_advertisement_interval;
DEFUN_CMD_FUNC_TEXT(no_vrrp_advertisement_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long vrid = 0;
	const char *vrid_str = NULL;
	long advertisement_interval = 0;
	const char *advertisement_interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrid")) {
			vrid_str = argv[_i]->arg;
			char *_end;
			vrid = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "advertisement_interval")) {
			advertisement_interval_str = argv[_i]->arg;
			char *_end;
			advertisement_interval = strtol(argv[_i]->arg, &_end, 10);
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
	if (!vrid_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrid_str");
		return CMD_WARNING;
	}

	return no_vrrp_advertisement_interval_magic(self, vty, argc, argv, vrid, vrid_str, advertisement_interval, advertisement_interval_str);
}

/* vrrp_ip => "[no] vrrp (1-255)$vrid ip A.B.C.D" */
DEFUN_CMD_FUNC_DECL(vrrp_ip)
#define funcdecl_vrrp_ip static int vrrp_ip_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long vrid,\
	const char * vrid_str __attribute__ ((unused)),\
	struct in_addr ip,\
	const char * ip_str __attribute__ ((unused)))
funcdecl_vrrp_ip;
DEFUN_CMD_FUNC_TEXT(vrrp_ip)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long vrid = 0;
	const char *vrid_str = NULL;
	struct in_addr ip = { INADDR_ANY };
	const char *ip_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrid")) {
			vrid_str = argv[_i]->arg;
			char *_end;
			vrid = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "ip")) {
			ip_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &ip);
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
	if (!vrid_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrid_str");
		return CMD_WARNING;
	}
	if (!ip_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "ip_str");
		return CMD_WARNING;
	}

	return vrrp_ip_magic(self, vty, argc, argv, no, vrid, vrid_str, ip, ip_str);
}

/* vrrp_ip6 => "[no] vrrp (1-255)$vrid ipv6 X:X::X:X" */
DEFUN_CMD_FUNC_DECL(vrrp_ip6)
#define funcdecl_vrrp_ip6 static int vrrp_ip6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long vrid,\
	const char * vrid_str __attribute__ ((unused)),\
	struct in6_addr ipv6,\
	const char * ipv6_str __attribute__ ((unused)))
funcdecl_vrrp_ip6;
DEFUN_CMD_FUNC_TEXT(vrrp_ip6)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long vrid = 0;
	const char *vrid_str = NULL;
	struct in6_addr ipv6 = {};
	const char *ipv6_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrid")) {
			vrid_str = argv[_i]->arg;
			char *_end;
			vrid = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
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
	if (!vrid_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrid_str");
		return CMD_WARNING;
	}
	if (!ipv6_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "ipv6_str");
		return CMD_WARNING;
	}

	return vrrp_ip6_magic(self, vty, argc, argv, no, vrid, vrid_str, ipv6, ipv6_str);
}

/* vrrp_preempt => "[no] vrrp (1-255)$vrid preempt" */
DEFUN_CMD_FUNC_DECL(vrrp_preempt)
#define funcdecl_vrrp_preempt static int vrrp_preempt_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long vrid,\
	const char * vrid_str __attribute__ ((unused)))
funcdecl_vrrp_preempt;
DEFUN_CMD_FUNC_TEXT(vrrp_preempt)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long vrid = 0;
	const char *vrid_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrid")) {
			vrid_str = argv[_i]->arg;
			char *_end;
			vrid = strtol(argv[_i]->arg, &_end, 10);
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
	if (!vrid_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrid_str");
		return CMD_WARNING;
	}

	return vrrp_preempt_magic(self, vty, argc, argv, no, vrid, vrid_str);
}

/* vrrp_autoconfigure => "[no] vrrp autoconfigure [version (2-3)]" */
DEFUN_CMD_FUNC_DECL(vrrp_autoconfigure)
#define funcdecl_vrrp_autoconfigure static int vrrp_autoconfigure_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long version,\
	const char * version_str __attribute__ ((unused)))
funcdecl_vrrp_autoconfigure;
DEFUN_CMD_FUNC_TEXT(vrrp_autoconfigure)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long version = 0;
	const char *version_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "version")) {
			version_str = argv[_i]->arg;
			char *_end;
			version = strtol(argv[_i]->arg, &_end, 10);
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

	return vrrp_autoconfigure_magic(self, vty, argc, argv, no, version, version_str);
}

/* vrrp_default => "[no] vrrp default <advertisement-interval$adv (10-40950)$advint|preempt$p|priority$prio (1-254)$prioval|shutdown$s>" */
DEFUN_CMD_FUNC_DECL(vrrp_default)
#define funcdecl_vrrp_default static int vrrp_default_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * adv,\
	long advint,\
	const char * advint_str __attribute__ ((unused)),\
	const char * p,\
	const char * prio,\
	long prioval,\
	const char * prioval_str __attribute__ ((unused)),\
	const char * s)
funcdecl_vrrp_default;
DEFUN_CMD_FUNC_TEXT(vrrp_default)
{
#if 7 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *adv = NULL;
	long advint = 0;
	const char *advint_str = NULL;
	const char *p = NULL;
	const char *prio = NULL;
	long prioval = 0;
	const char *prioval_str = NULL;
	const char *s = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "adv")) {
			adv = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "advint")) {
			advint_str = argv[_i]->arg;
			char *_end;
			advint = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "p")) {
			p = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prio")) {
			prio = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prioval")) {
			prioval_str = argv[_i]->arg;
			char *_end;
			prioval = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "s")) {
			s = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return vrrp_default_magic(self, vty, argc, argv, no, adv, advint, advint_str, p, prio, prioval, prioval_str, s);
}

/* vrrp_vrid_show => "show vrrp [interface INTERFACE$ifn] [(1-255)$vrid] [json$json]" */
DEFUN_CMD_FUNC_DECL(vrrp_vrid_show)
#define funcdecl_vrrp_vrid_show static int vrrp_vrid_show_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ifn,\
	long vrid,\
	const char * vrid_str __attribute__ ((unused)),\
	const char * json)
funcdecl_vrrp_vrid_show;
DEFUN_CMD_FUNC_TEXT(vrrp_vrid_show)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ifn = NULL;
	long vrid = 0;
	const char *vrid_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ifn")) {
			ifn = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrid")) {
			vrid_str = argv[_i]->arg;
			char *_end;
			vrid = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
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

	return vrrp_vrid_show_magic(self, vty, argc, argv, ifn, vrid, vrid_str, json);
}

/* vrrp_vrid_show_summary => "show vrrp [interface INTERFACE$ifn] [(1-255)$vrid] summary" */
DEFUN_CMD_FUNC_DECL(vrrp_vrid_show_summary)
#define funcdecl_vrrp_vrid_show_summary static int vrrp_vrid_show_summary_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ifn,\
	long vrid,\
	const char * vrid_str __attribute__ ((unused)))
funcdecl_vrrp_vrid_show_summary;
DEFUN_CMD_FUNC_TEXT(vrrp_vrid_show_summary)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ifn = NULL;
	long vrid = 0;
	const char *vrid_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ifn")) {
			ifn = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrid")) {
			vrid_str = argv[_i]->arg;
			char *_end;
			vrid = strtol(argv[_i]->arg, &_end, 10);
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

	return vrrp_vrid_show_summary_magic(self, vty, argc, argv, ifn, vrid, vrid_str);
}

/* debug_vrrp => "[no] debug vrrp [{protocol$proto|autoconfigure$ac|packets$pkt|sockets$sock|ndisc$ndisc|arp$arp|zebra$zebra}]" */
DEFUN_CMD_FUNC_DECL(debug_vrrp)
#define funcdecl_debug_vrrp static int debug_vrrp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * proto,\
	const char * ac,\
	const char * pkt,\
	const char * sock,\
	const char * ndisc,\
	const char * arp,\
	const char * zebra)
funcdecl_debug_vrrp;
DEFUN_CMD_FUNC_TEXT(debug_vrrp)
{
#if 8 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *proto = NULL;
	const char *ac = NULL;
	const char *pkt = NULL;
	const char *sock = NULL;
	const char *ndisc = NULL;
	const char *arp = NULL;
	const char *zebra = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ac")) {
			ac = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "pkt")) {
			pkt = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "sock")) {
			sock = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ndisc")) {
			ndisc = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "arp")) {
			arp = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "zebra")) {
			zebra = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return debug_vrrp_magic(self, vty, argc, argv, no, proto, ac, pkt, sock, ndisc, arp, zebra);
}

