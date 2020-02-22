/****************************************************************************
 *
 *   Copyright (c) 2020 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#pragma once


// DMA1 Channel/Stream Selections
//--------------------------------------------//---------------------------//----------------
//      DMAMAP_USART3_RX                      // DMA1, Stream 1, Channel 4
//      DMAMAP_UART4_RX                       // DMA1, Stream 2, Channel 4
#define DMAMAP_USART3_TX  DMAMAP_USART3_TX_1  // DMA1, Stream 3, Channel 4
//      AVAILABLE                             // DMA2, Stream 4
//      DMAMAP_USART2_RX                      // DMA1, Stream 5, Channel 4


//  DMA2 Channel/Stream Selections
//--------------------------------------------//---------------------------//----------------
#define DMAMAP_SPI1_RX    DMAMAP_SPI1_RX_1    // DMA2, Stream 0, Channel 3    (SPI1 sensors RX)
//      AVAILABLE                             // DMA2, Stream 1
#define DMAMAP_USART6_RX  DMAMAP_USART6_RX_2  // DMA2, Stream 2, Channel 5
#define DMAMAP_SPI1_TX    DMAMAP_SPI1_TX_1    // DMA2, Stream 3, Channel 3    (SPI1 sensors TX)
#define DMAMAP_SPI5_TX    DMAMAP_SPI5_TX_1    // DMA2, Stream 4, Channel 3    (SPI5 sensors TX)
#define DMAMAP_SPI5_RX    DMAMAP_SPI5_RX_2    // DMA2, Stream 5, Channel 3    (SPI5 sensors RX)
#define DMAMAP_SDMMC1     DMAMAP_SDMMC1_2     // DMA2, Stream 6, Channel 4
#define DMAMAP_USART6_TX  DMAMAP_USART6_TX_2  // DMA2, Stream 7, Channel 5