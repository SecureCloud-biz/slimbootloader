/** @file
  Register names for PCH PMC device

  Conventions:

  - Register definition format:
    Prefix_[GenerationName]_[ComponentName]_SubsystemName_RegisterSpace_RegisterName
  - Prefix:
    Definitions beginning with "R_" are registers
    Definitions beginning with "B_" are bits within registers
    Definitions beginning with "V_" are meaningful values within the bits
    Definitions beginning with "S_" are register size
    Definitions beginning with "N_" are the bit position
  - [GenerationName]:
    Three letter acronym of the generation is used (e.g. SKL,KBL,CNL etc.).
    Register name without GenerationName applies to all generations.
  - [ComponentName]:
    This field indicates the component name that the register belongs to (e.g. PCH, SA etc.)
    Register name without ComponentName applies to all components.
    Register that is specific to -H denoted by "_PCH_H_" in component name.
    Register that is specific to -LP denoted by "_PCH_LP_" in component name.
  - SubsystemName:
    This field indicates the subsystem name of the component that the register belongs to
    (e.g. PCIE, USB, SATA, GPIO, PMC etc.).
  - RegisterSpace:
    MEM - MMIO space register of subsystem.
    IO  - IO space register of subsystem.
    PCR - Private configuration register of subsystem.
    CFG - PCI configuration space register of subsystem.
  - RegisterName:
    Full register name.

  Copyright (c) 1999 - 2021, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

//
// PMC SSRAM Registers (D20:F2)
//
#define PCI_DEVICE_NUMBER_PCH_PMC_SSRAM          20
#define PCI_FUNCTION_NUMBER_PCH_PMC_SSRAM        2

//
// PMC Registers (D31:F2)
//
#define PCI_DEVICE_NUMBER_PCH_PMC                31
#define PCI_FUNCTION_NUMBER_PCH_PMC              2

#define R_PMC_PWRM_TIMED_GPIO_CONTROL_0                     0x1210
#define R_PMC_PWRM_TIMED_GPIO_CONTROL_1                     0x1310


//
// ACPI and legacy I/O register offsets from ACPIBASE
//
#define R_ACPI_IO_PM1_STS                        0x00
#define B_ACPI_IO_PM1_STS_RTC_EN                 BIT26
#define B_ACPI_IO_PM1_STS_WAK                    BIT15
#define B_ACPI_IO_PM1_STS_PRBTNOR                BIT11
#define B_ACPI_IO_PM1_STS_RTC                    BIT10
#define B_ACPI_IO_PM1_STS_PWRBTN                 BIT8
#define B_ACPI_IO_PM1_STS_GBL                    BIT5
#define B_ACPI_IO_PM1_STS_TMROF                  BIT0

#define B_ACPI_IO_PM1_EN_PWRBTN                  BIT8

#define R_ACPI_IO_PM1_CNT                        0x04
#define B_ACPI_IO_PM1_CNT_SCI_EN                 BIT0
#define B_ACPI_IO_PM1_CNT_SLP_TYP                (BIT12 | BIT11 | BIT10)
#define V_ACPI_IO_PM1_CNT_S0                     0
#define V_ACPI_IO_PM1_CNT_S3                     (BIT12 | BIT10)
#define V_ACPI_IO_PM1_CNT_S4                     (BIT12 | BIT11)
#define V_ACPI_IO_PM1_CNT_S5                     (BIT12 | BIT11 | BIT10)

#define R_ACPI_IO_PM1_TMR                        0x08
#define V_ACPI_IO_PM1_TMR_FREQUENCY              3579545
#define B_ACPI_IO_PM1_TMR_VAL                    0xFFFFFF
#define V_ACPI_IO_PM1_TMR_MAX_VAL                0x1000000       ///< The timer is 24 bit overflow

#define R_ACPI_IO_SMI_EN                              0x30
#define S_ACPI_IO_SMI_EN                              4
#define B_ACPI_IO_SMI_EN_LEGACY_USB3                  BIT31
#define B_ACPI_IO_SMI_EN_GPIO_UNLOCK_SMI              BIT27
#define B_ACPI_IO_SMI_EN_LEGACY_USB2                  BIT17
#define B_ACPI_IO_SMI_EN_PERIODIC                     BIT14
#define B_ACPI_IO_SMI_EN_TCO                          BIT13
#define B_ACPI_IO_SMI_EN_MCSMI                        BIT11
#define B_ACPI_IO_SMI_EN_BIOS_RLS                     BIT7
#define B_ACPI_IO_SMI_EN_SWSMI_TMR                    BIT6
#define B_ACPI_IO_SMI_EN_APMC                         BIT5
#define B_ACPI_IO_SMI_EN_ON_SLP_EN                    BIT4
#define B_ACPI_IO_SMI_EN_LEGACY_USB                   BIT3
#define B_ACPI_IO_SMI_EN_BIOS                         BIT2
#define B_ACPI_IO_SMI_EN_EOS                          BIT1
#define B_ACPI_IO_SMI_EN_GBL_SMI                      BIT0
#define N_ACPI_IO_SMI_EN_LEGACY_USB3                  31
#define N_ACPI_IO_SMI_EN_ESPI                         28
#define N_ACPI_IO_SMI_EN_GPIO_UNLOCK                  27
#define N_ACPI_IO_SMI_EN_INTEL_USB2                   18
#define N_ACPI_IO_SMI_EN_LEGACY_USB2                  17
#define N_ACPI_IO_SMI_EN_PERIODIC                     14
#define N_ACPI_IO_SMI_EN_TCO                          13
#define N_ACPI_IO_SMI_EN_MCSMI                        11
#define N_ACPI_IO_SMI_EN_BIOS_RLS                     7
#define N_ACPI_IO_SMI_EN_SWSMI_TMR                    6
#define N_ACPI_IO_SMI_EN_APMC                         5
#define N_ACPI_IO_SMI_EN_ON_SLP_EN                    4
#define N_ACPI_IO_SMI_EN_LEGACY_USB                   3
#define N_ACPI_IO_SMI_EN_BIOS                         2
#define N_ACPI_IO_SMI_EN_EOS                          1
#define N_ACPI_IO_SMI_EN_GBL_SMI                      0

#define R_ACPI_IO_SMI_STS                             0x34
#define B_ACPI_IO_SMI_STS_SMBUS                       BIT16
#define B_ACPI_IO_SMI_STS_PERIODIC                    BIT14
#define B_ACPI_IO_SMI_STS_TCO                         BIT13
#define B_ACPI_IO_SMI_STS_MCSMI                       BIT11
#define B_ACPI_IO_SMI_STS_SWSMI_TMR                   BIT6
#define B_ACPI_IO_SMI_STS_APM                         BIT5
#define B_ACPI_IO_SMI_STS_ON_SLP_EN                   BIT4
#define B_ACPI_IO_SMI_STS_BIOS                        BIT2

#define R_ACPI_IO_GPE_CNTL                            0x40


#define R_ACPI_IO_OC_WDT_CTL                          0x54

#define R_ACPI_IO_GPE0_STS_127_96                  0x6C

#define R_ACPI_IO_GPE0_EN_127_96                   0x7C
#define B_ACPI_IO_GPE0_EN_127_96_PME_B0            BIT13
#define B_ACPI_IO_GPE0_EN_127_96_PME               BIT11


//
// TCO register I/O map
//
#define R_TCO_IO_TCO1_STS                            0x04


//
// PWRM Registers for IPC interface
//
#define R_PMC_PWRM_IPC_CMD                                  0x00                        ///< IPC command
#define N_PMC_PWRM_IPC_CMD_CMD_ID                           12                          ///< IPC command.cmd.ID
#define N_PMC_PWRM_IPC_CMD_SIZE                             16                          ///< IPC command.size
#define N_PMC_PWRM_IPC_CMD_COMMAND                          0                           ///< IPC command.cmd.Command
#define V_PMC_PWRM_IPC_SRC_CLK_PORT_MAPPING_CMD             0xAC                        ///< IPC to PMC SRCCLK and port mapping command
#define R_PMC_PWRM_IPC_STS                                  0x04                        ///< IPC Status
#define R_PMC_PWRM_IPC_WBUF0                                0x80                        ///< IPC Write Buffer
#define R_PMC_PWRM_IPC_WBUF1                                0x84                        ///< IPC Write Buffer
#define R_PMC_PWRM_IPC_WBUF2                                0x88                        ///< IPC Write Buffer
#define R_PMC_PWRM_IPC_WBUF3                                0x8C                        ///< IPC Write Buffer
#define R_PMC_PWRM_IPC_RBUF0                                0x90                        ///< IPC Read Buffer
#define R_PMC_PWRM_IPC_RBUF1                                0x94                        ///< IPC Read Buffer
#define R_PMC_PWRM_IPC_RBUF2                                0x98                        ///< IPC Read Buffer
#define R_PMC_PWRM_IPC_RBUF3                                0x9C                        ///< IPC Read Buffer


//
// PWRM Registers
//
#define R_PMC_PWRM_GEN_PMCON_A                              0x1020                      ///< in CNL located in PWRM
#define B_PMC_PWRM_GEN_PMCON_A_GBL_RST_STS                  BIT24
#define B_PMC_PWRM_GEN_PMCON_A_PWR_FLR                      BIT14
#define B_PMC_PWRM_GEN_PMCON_A_HOST_RST_STS                 BIT9

#define R_PMC_PWRM_GEN_PMCON_B                              0x1024
#define B_PMC_PWRM_GEN_PMCON_B_SMI_LOCK                     BIT4
#define B_PMC_PWRM_GEN_PMCON_B_RTC_PWR_STS                  BIT2


#define B_PMC_PWRM_THROT_1_VR_ALERT                         BIT0


#define R_PMC_PWRM_MODPHY_PM_CFG5                           0x10D0
#define R_PMC_PWRM_MODPHY_PM_CFG6                           0x10D4

#define R_PMC_PWRM_THERMAL_TSS0                             0x1560                      ///< Temperature Sensor Control and Status
#define B_PMC_PWRM_THERMAL_TSS0_TSR_MASK                    0x1FF

#define R_PMC_PWRM_WADT_AC                                  0x1800

#define R_PMC_PWRM_CFG                                      0x1818                      ///< Power Management Configuration


#define R_PMC_PWRM_SLP_S0_RESIDENCY_COUNTER                 0x193C


#define R_PMC_PWRM_CFG4                                     0x18E8                      ///< Power Management Configuration Reg 4


#define R_PMC_PWRM_1B1C                                     0x1B1C


#define R_PMC_PWRM_1BD0                                     0x1BD0


#define B_PMC_PWRM_THROT_1_VR_ALERT                         BIT0


#define R_PMC_PWRM_ST_PG_FDIS_PMC_1                         0x1E20 ///< Static PG Related Function Disable Register 1


#define R_PMC_PWRM_NST_PG_FDIS_1                            0x1E28


//
// Low Power Mode requirements - data length (byte)
//
#define PMC_LPM_REQ_DATA_LEN                                192
//
// Low Power Mode requirements - data length (bit)
//
#define PMC_LPM_REQ_BITS_DATA_LEN                           1536
