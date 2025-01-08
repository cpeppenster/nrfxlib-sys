#include "wrapper.h"

struct nrf_modem_dect_phy_hdr_type_1 nrf_modem_dect_phy_hdr_type_1_new(
    uint8_t packet_length,
    uint8_t packet_length_type,
    uint8_t header_format,
    uint8_t short_network_id,
    uint8_t transmitter_id_hi,
    uint8_t transmitter_id_lo,
    uint8_t df_mcs,
    uint8_t transmit_power
) {
    struct nrf_modem_dect_phy_hdr_type_1 hdr = {
        .packet_length = packet_length,
        .packet_length_type = packet_length_type,
        .header_format = header_format,
        .short_network_id = short_network_id,
        .transmitter_id_hi = transmitter_id_hi,
        .transmitter_id_lo = transmitter_id_lo,
        .df_mcs = df_mcs,
        .transmit_power = transmit_power
    };

    return hdr;
}

union nrf_modem_dect_phy_hdr *nrf_modem_dect_phy_hdr_from_type_1(struct nrf_modem_dect_phy_hdr_type_1 *hdr) {
    return (union nrf_modem_dect_phy_hdr *) hdr;
}

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
) {
    struct nrf_modem_dect_phy_tx_params params = {
        .start_time = start_time,
        .handle = handle,
        .network_id = network_id,
        .phy_type = phy_type,
        .lbt_rssi_threshold_max = lbt_rssi_threshold_max,
        .carrier = carrier,
        .lbt_period = lbt_period,
        .phy_header = phy_header,
        .bs_cqi = bs_cqi,
        .data = data,
        .data_size = data_size
    };

    return params;
}

struct nrf_modem_dect_phy_rx_filter nrf_modem_dect_phy_rx_filter_new(
    uint8_t short_network_id,
    uint8_t is_short_network_id_used,
    uint16_t receiver_identity
) {
    struct nrf_modem_dect_phy_rx_filter filter = {
        .short_network_id = short_network_id,
        .is_short_network_id_used = is_short_network_id_used,
        .receiver_identity = receiver_identity
    };

    return filter;
}

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
) {
    struct nrf_modem_dect_phy_rx_params params = {
        .start_time = start_time,
        .handle = handle,
        .network_id = network_id,
        .mode = mode,
        .rssi_interval = rssi_interval,
        .link_id = link_id,
        .rssi_level = rssi_level,
        .carrier = carrier,
        .duration = duration,
        .filter = filter
    };

    return params;
}

struct nrf_modem_dect_phy_tx_rx_params nrf_modem_dect_phy_tx_rx_params_new(
    struct nrf_modem_dect_phy_tx_params tx_params,
    struct nrf_modem_dect_phy_rx_params rx_params
) {
    struct nrf_modem_dect_phy_tx_rx_params params = {
        .tx = tx_params,
        .rx = rx_params
    };

    return params;
}
