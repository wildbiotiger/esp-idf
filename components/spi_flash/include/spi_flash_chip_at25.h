// Copyright 2022-2023 Black Pearl Technology, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <stdint.h>
#include "esp_flash.h"
#include "spi_flash_chip_driver.h"


/**
 * AT25 SPI flash chip_drv, uses all the above functions for its operations. In
 * default autodetection, this is used as a catchall if a more specific chip_drv
 * is not found.
 */
esp_err_t spi_flash_chip_at25_probe(esp_flash_t *chip, uint32_t flash_id);
esp_err_t spi_flash_chip_at25_detect_size(esp_flash_t *chip, uint32_t *size);
spi_flash_caps_t spi_flash_chip_at25_get_caps(esp_flash_t *chip);
 
extern const spi_flash_chip_t esp_flash_chip_at25;
