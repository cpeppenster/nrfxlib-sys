/**
 * These are the header files exported by this crate.
 */

/*
 * libmodem headers
 */
#include "nrf_modem/include/nrf_modem_toolchain.h"
#include "nrf_modem/include/nrf_modem.h"
#include "nrf_modem/include/nrf_modem_os.h"
#include "nrf_modem/include/nrf_errno.h"
#include "nrf_modem/include/nrf_socket.h"
#include "nrf_modem/include/nrf_modem_gnss.h"
#include "nrf_modem/include/nrf_modem_delta_dfu.h"
#include "nrf_modem/include/nrf_modem_at.h"
#include "nrf_modem/include/nrf_modem_bootloader.h"
#include "nrf_modem/include/nrf_modem_trace.h"
#include "nrf_modem/include/nrf_gai_errors.h"
#include "nrf_modem/include/nrf_modem_dect_phy.h"

/*
 * Crypto Cell 310 (CC310) platform headers
 */

#include "crypto/nrf_cc310_platform/include/nrf_cc3xx_platform.h"
#include "crypto/nrf_cc310_platform/include/nrf_cc3xx_platform_abort.h"
#include "crypto/nrf_cc310_platform/include/nrf_cc3xx_platform_defines.h"
#include "crypto/nrf_cc310_platform/include/nrf_cc3xx_platform_entropy.h"
#include "crypto/nrf_cc310_platform/include/nrf_cc3xx_platform_mutex.h"
#include "crypto/nrf_cc310_platform/include/nrf_cc3xx_platform_ctr_drbg.h"

/*
 * Crypto Cell 310 (CC310) mbedTLS integration headers
 *
 * Note: We only include the sub-set of header files that don't require
 * access to the full mbedTLS headers (which aren't bundled in nrfxlib).
 */

#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/aes_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/chacha20_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/chachapoly_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/cmac_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/dhm_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/ecp_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/platform_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/poly1305_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/rsa_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/sha1_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/sha256_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls/threading_alt.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_aes_defs.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_aes_defs_proj.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_bitops.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_error.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_hash_defs.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_hash_defs_proj.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_kdf.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_pal_compiler.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_pal_types.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_pal_types_plat.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_rnd_common.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/cc_rnd_error.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/mbedtls_cc_aes_key_wrap.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/mbedtls_cc_aes_key_wrap_error.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/mbedtls_cc_ec_mont_edw_error.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/mbedtls_cc_hkdf.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/mbedtls_cc_hkdf_error.h"
#include "crypto/nrf_cc310_mbedcrypto/include/mbedtls_extra/mbedtls_cc_srp_error.h"

/*
 * In addition to CC310 acceleration for mbedTLS, this repository also appears
 * to contain pre-compiled crypto code from https://oberonhap.com. These
 * are the liboberon headers.
 */

#include "crypto/nrf_oberon/include/ocrypto_aes_cbc_pkcs.h"
#include "crypto/nrf_oberon/include/ocrypto_aes_cbc.h"
#include "crypto/nrf_oberon/include/ocrypto_aes_ccm.h"
#include "crypto/nrf_oberon/include/ocrypto_aes_cmac.h"
#include "crypto/nrf_oberon/include/ocrypto_aes_ctr.h"
#include "crypto/nrf_oberon/include/ocrypto_aes_eax.h"
#include "crypto/nrf_oberon/include/ocrypto_aes_ecb.h"
#include "crypto/nrf_oberon/include/ocrypto_aes_gcm.h"
#include "crypto/nrf_oberon/include/ocrypto_aes_key.h"
#include "crypto/nrf_oberon/include/ocrypto_chacha20.h"
#include "crypto/nrf_oberon/include/ocrypto_chacha20_poly1305.h"
#include "crypto/nrf_oberon/include/ocrypto_constant_time.h"
#include "crypto/nrf_oberon/include/ocrypto_curve_p224.h"
#include "crypto/nrf_oberon/include/ocrypto_curve_p256.h"
#include "crypto/nrf_oberon/include/ocrypto_curve25519.h"
#include "crypto/nrf_oberon/include/ocrypto_ecdh_p224.h"
#include "crypto/nrf_oberon/include/ocrypto_ecdh_p256.h"
#include "crypto/nrf_oberon/include/ocrypto_ecdsa_p224.h"
#include "crypto/nrf_oberon/include/ocrypto_ecdsa_p256.h"
#include "crypto/nrf_oberon/include/ocrypto_ecjpake_p256.h"
#include "crypto/nrf_oberon/include/ocrypto_ed25519.h"
#include "crypto/nrf_oberon/include/ocrypto_hkdf_sha1.h"
#include "crypto/nrf_oberon/include/ocrypto_hkdf_sha256.h"
#include "crypto/nrf_oberon/include/ocrypto_hkdf_sha512.h"
#include "crypto/nrf_oberon/include/ocrypto_hmac_sha1.h"
#include "crypto/nrf_oberon/include/ocrypto_hmac_sha256.h"
#include "crypto/nrf_oberon/include/ocrypto_hmac_sha512.h"
#include "crypto/nrf_oberon/include/ocrypto_pbkdf2_cmac_prf128.h"
#include "crypto/nrf_oberon/include/ocrypto_pbkdf2_sha1.h"
#include "crypto/nrf_oberon/include/ocrypto_pbkdf2_sha256.h"
#include "crypto/nrf_oberon/include/ocrypto_poly1305.h"
#include "crypto/nrf_oberon/include/ocrypto_rsa.h"
#include "crypto/nrf_oberon/include/ocrypto_rsa_key.h"
#include "crypto/nrf_oberon/include/ocrypto_rsa_operations.h"
#include "crypto/nrf_oberon/include/ocrypto_rsa_padding.h"
#include "crypto/nrf_oberon/include/ocrypto_rsa_primitives.h"
#include "crypto/nrf_oberon/include/ocrypto_sc_p224.h"
#include "crypto/nrf_oberon/include/ocrypto_sc_p256.h"
#include "crypto/nrf_oberon/include/ocrypto_secp160r1.h"
#include "crypto/nrf_oberon/include/ocrypto_sha1.h"
#include "crypto/nrf_oberon/include/ocrypto_sha224.h"
#include "crypto/nrf_oberon/include/ocrypto_sha256.h"
#include "crypto/nrf_oberon/include/ocrypto_sha384.h"
#include "crypto/nrf_oberon/include/ocrypto_sha512.h"
#include "crypto/nrf_oberon/include/ocrypto_spake2p_p256.h"
#include "crypto/nrf_oberon/include/ocrypto_srp.h"
#include "crypto/nrf_oberon/include/ocrypto_srtp.h"
#include "crypto/nrf_oberon/include/ocrypto_types.h"

#ifndef __NRFXLIB_SYS_WRAPPER_H__
#define __NRFXLIB_SYS_WRAPPER_H__

// Implement struct creation function for DECT_PHY since the are genereted wrong
struct nrf_modem_dect_phy_hdr_type_1 nrf_modem_dect_phy_hdr_type_1_new(
    uint8_t packet_length,
    uint8_t packet_length_type,
    uint8_t header_format,
    uint8_t short_network_id,
    uint8_t transmitter_id_hi,
    uint8_t transmitter_id_lo,
    uint8_t df_mcs,
    uint8_t transmit_power
);

union nrf_modem_dect_phy_hdr *nrf_modem_dect_phy_hdr_from_type_1(struct nrf_modem_dect_phy_hdr_type_1 *hdr);

struct nrf_modem_dect_phy_tx_params nrf_modem_dect_phy_tx_params_new(
    uint64_t start_time,
    uint32_t handle,
    uint32_t network_id,
    uint8_t phy_type,
    int8_t lbt_rssi_threshold_max,
    uint16_t carrier,
    uint32_t lbt_period,
    union nrf_modem_dect_phy_hdr *phy_header,
    uint8_t bs_cqi,
    uint8_t *data,
    uint32_t data_size
);

struct nrf_modem_dect_phy_rx_filter nrf_modem_dect_phy_rx_filter_new(
    uint8_t short_network_id,
    uint8_t is_short_network_id_used,
    uint16_t receiver_identity
);

struct nrf_modem_dect_phy_rx_params nrf_modem_dect_phy_rx_params_new(
    uint64_t start_time,
    uint32_t handle,
    uint32_t network_id,
    enum nrf_modem_dect_phy_rx_mode mode,
    enum nrf_modem_dect_phy_rssi_interval rssi_interval,
    struct nrf_modem_dect_phy_link_id link_id,
    int8_t rssi_level,
    uint16_t carrier,
    uint32_t duration,
    struct nrf_modem_dect_phy_rx_filter filter
);

struct nrf_modem_dect_phy_tx_rx_params nrf_modem_dect_phy_tx_rx_params_new(
    struct nrf_modem_dect_phy_tx_params tx_params,
    struct nrf_modem_dect_phy_rx_params rx_params
);

#endif

// End of File
