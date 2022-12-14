/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2018-2019, The Linux Foundation. All rights reserved.
 */

#ifndef _WCD938X_H
#define _WCD938X_H

enum {
	WCD9380 = 0,
	WCD9385 = 5,
};

#if IS_ENABLED(CONFIG_SND_SOC_WCD938X)
extern int wcd938x_info_create_codec_entry(struct snd_info_entry *codec_root,
				    struct snd_soc_codec *codec);
extern int wcd938x_get_codec_variant(struct snd_soc_codec *codec);

#else
static inline int wcd938x_info_create_codec_entry(struct snd_info_entry *codec_root,
				    struct snd_soc_codec *codec)
{
	return 0;
}
static inline int wcd938x_get_codec_variant(struct snd_soc_codec *codec)
{
	return 0;
}
#endif /* CONFIG_SND_SOC_WCD938X */
#endif /* _WCD938X_H */
