zephyr_include_directories(include)

zephyr_library_sources(
  src/Clock_Ip_Cfg.c
)

if(CONFIG_QDEC_S32K)
  zephyr_library_sources(src/Emios_Icu_Ip_SA_Init_PBcfg.c)
  zephyr_library_sources(src/Lcu_Ip_Cfg.c)
  zephyr_library_sources(src/Lcu_Ip_Init_PBcfg.c)
  zephyr_library_sources(src/Trgmux_Ip_Init_PBcfg.c)
endif()
