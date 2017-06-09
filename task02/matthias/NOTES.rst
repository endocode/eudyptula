Matthias' solution
------------------

* Run the new kernel built from  kernel/git/torvalds/linux.git

::

  dest@think:~/git/endocode-eudyptula (master)$ uname -a
   Linux think 4.12.0-rc4-00122-gb29794e #4 SMP Wed Jun 7 15:49:44 CEST 2017 x86_64 GNU/Linux
   dest@think:~/git/endocode-eudyptula (master)$


* Dmesg

::

  [    0.000000] microcode: microcode updated early to revision 0x20, date = 2017-01-27
  [    0.000000] Linux version 4.12.0-rc4-00122-gb29794e (dest@think) (gcc version 4.9.2 (Debian 4.9.2-10) ) #4 SMP Wed Jun 7 15:49:44 CEST 2017
  [    0.000000] Command line: BOOT_IMAGE=/vmlinuz-4.12.0-rc4-00122-gb29794e root=/dev/mapper/think--vg-lv_root ro cgroup_enable=memory acpi_osi=Linux acpi_backlight=vendor
  [    0.000000] x86/fpu: Supporting XSAVE feature 0x001: 'x87 floating point registers'
  [    0.000000] x86/fpu: Supporting XSAVE feature 0x002: 'SSE registers'
  [    0.000000] x86/fpu: Supporting XSAVE feature 0x004: 'AVX registers'
  [    0.000000] x86/fpu: xstate_offset[2]:  576, xstate_sizes[2]:  256
  [    0.000000] x86/fpu: Enabled xstate features 0x7, context size is 832 bytes, using 'standard' format.
  [    0.000000] e820: BIOS-provided physical RAM map:
  [    0.000000] BIOS-e820: [mem 0x0000000000000000-0x000000000009cfff] usable
  [    0.000000] BIOS-e820: [mem 0x000000000009d000-0x000000000009ffff] reserved
  [    0.000000] BIOS-e820: [mem 0x00000000000e0000-0x00000000000fffff] reserved
  [    0.000000] BIOS-e820: [mem 0x0000000000100000-0x00000000ce1e6fff] usable
  [    0.000000] BIOS-e820: [mem 0x00000000ce1e7000-0x00000000dcd3efff] reserved
  [    0.000000] BIOS-e820: [mem 0x00000000dcd3f000-0x00000000dce7efff] ACPI NVS
  [    0.000000] BIOS-e820: [mem 0x00000000dce7f000-0x00000000dcefefff] ACPI data
  [    0.000000] BIOS-e820: [mem 0x00000000dceff000-0x00000000df9fffff] reserved
  [    0.000000] BIOS-e820: [mem 0x00000000f8000000-0x00000000fbffffff] reserved
  [    0.000000] BIOS-e820: [mem 0x00000000fe101000-0x00000000fe112fff] reserved
  [    0.000000] BIOS-e820: [mem 0x00000000fec00000-0x00000000fec00fff] reserved
  [    0.000000] BIOS-e820: [mem 0x00000000fed08000-0x00000000fed08fff] reserved
  [    0.000000] BIOS-e820: [mem 0x00000000fed10000-0x00000000fed19fff] reserved
  [    0.000000] BIOS-e820: [mem 0x00000000fed1c000-0x00000000fed1ffff] reserved
  [    0.000000] BIOS-e820: [mem 0x00000000fee00000-0x00000000fee00fff] reserved
  [    0.000000] BIOS-e820: [mem 0x00000000ffc00000-0x00000000ffffffff] reserved
  [    0.000000] BIOS-e820: [mem 0x0000000100000000-0x000000031f5fffff] usable
  [    0.000000] NX (Execute Disable) protection: active
  [    0.000000] SMBIOS 2.7 present.
  [    0.000000] DMI: LENOVO 20AQCTO1WW/20AQCTO1WW, BIOS GJET72WW (2.22 ) 02/21/2014
  [    0.000000] tsc: Fast TSC calibration using PIT
  [    0.000000] e820: update [mem 0x00000000-0x00000fff] usable ==> reserved
  [    0.000000] e820: remove [mem 0x000a0000-0x000fffff] usable
  [    0.000000] e820: last_pfn = 0x31f600 max_arch_pfn = 0x400000000
  [    0.000000] MTRR default type: write-back
  [    0.000000] MTRR fixed ranges enabled:
  [    0.000000]   00000-9FFFF write-back
  [    0.000000]   A0000-BFFFF uncachable
  [    0.000000]   C0000-FFFFF write-protect
  [    0.000000] MTRR variable ranges enabled:
  [    0.000000]   0 base 00E0000000 mask 7FE0000000 uncachable
  [    0.000000]   1 base 00DE000000 mask 7FFE000000 uncachable
  [    0.000000]   2 base 00DD000000 mask 7FFF000000 uncachable
  [    0.000000]   3 base 00DCF00000 mask 7FFFF00000 uncachable
  [    0.000000]   4 disabled
  [    0.000000]   5 disabled
  [    0.000000]   6 disabled
  [    0.000000]   7 disabled
  [    0.000000]   8 disabled
  [    0.000000]   9 disabled
  [    0.000000] x86/PAT: Configuration [0-7]: WB  WC  UC- UC  WB  WC  UC- WT
  [    0.000000] e820: last_pfn = 0xce1e7 max_arch_pfn = 0x400000000
  [    0.000000] found SMP MP-table at [mem 0x000f0100-0x000f010f] mapped at [ffff9adf400f0100]
  [    0.000000] Base memory trampoline at [ffff9adf40097000] 97000 size 24576
  [    0.000000] Using GB pages for direct mapping
  [    0.000000] BRK [0x22b172000, 0x22b172fff] PGTABLE
  [    0.000000] BRK [0x22b173000, 0x22b173fff] PGTABLE
  [    0.000000] BRK [0x22b174000, 0x22b174fff] PGTABLE
  [    0.000000] BRK [0x22b175000, 0x22b175fff] PGTABLE
  [    0.000000] BRK [0x22b176000, 0x22b176fff] PGTABLE
  [    0.000000] BRK [0x22b177000, 0x22b177fff] PGTABLE
  [    0.000000] BRK [0x22b178000, 0x22b178fff] PGTABLE
  [    0.000000] RAMDISK: [mem 0x28007000-0x2fffafff]
  [    0.000000] ACPI: Early table checksum verification disabled
  [    0.000000] ACPI: RSDP 0x00000000000F0120 000024 (v02 LENOVO)
  [    0.000000] ACPI: XSDT 0x00000000DCEFE170 0000CC (v01 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: FACP 0x00000000DCEF9000 00010C (v05 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: DSDT 0x00000000DCEE3000 010E74 (v01 LENOVO TP-GJ    00002220 INTL 20120711)
  [    0.000000] ACPI: FACS 0x00000000DCE4A000 000040
  [    0.000000] ACPI: ASF! 0x00000000DCEFD000 0000A5 (v32 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: DBGP 0x00000000DCEFC000 000034 (v01 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: ECDT 0x00000000DCEFB000 000052 (v01 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: HPET 0x00000000DCEF8000 000038 (v01 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: APIC 0x00000000DCEF7000 000098 (v01 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: MCFG 0x00000000DCEF6000 00003C (v01 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: SSDT 0x00000000DCEF5000 000033 (v01 LENOVO TP-SSDT1 00000100 INTL 20120711)
  [    0.000000] ACPI: SSDT 0x00000000DCEF4000 00044F (v01 LENOVO TP-SSDT2 00000200 INTL 20120711)
  [    0.000000] ACPI: SSDT 0x00000000DCEE2000 0009CB (v01 LENOVO SataAhci 00001000 INTL 20120711)
  [    0.000000] ACPI: SSDT 0x00000000DCEE1000 000152 (v01 LENOVO Rmv_Batt 00001000 INTL 20120711)
  [    0.000000] ACPI: SSDT 0x00000000DCEE0000 0007F5 (v01 LENOVO Cpu0Ist  00003000 INTL 20120711)
  [    0.000000] ACPI: SSDT 0x00000000DCEDF000 000AD8 (v01 LENOVO CpuPm    00003000 INTL 20120711)
  [    0.000000] ACPI: SSDT 0x00000000DCEDD000 001215 (v01 LENOVO SaSsdt   00003000 INTL 20120711)
  [    0.000000] ACPI: TCPA 0x00000000DCEDC000 000032 (v02 PTL    LENOVO   06040000 LNVO 00000001)
  [    0.000000] ACPI: UEFI 0x00000000DCEDB000 000042 (v01 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: MSDM 0x00000000DCDB4000 000055 (v03 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: BATB 0x00000000DCEDA000 000046 (v01 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: FPDT 0x00000000DCED9000 000064 (v01 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: UEFI 0x00000000DCED8000 0002E2 (v01 LENOVO TP-GJ    00002220 PTEC 00000002)
  [    0.000000] ACPI: SSDT 0x00000000DCED7000 00047F (v01 LENOVO IsctTabl 00001000 INTL 20120711)
  [    0.000000] ACPI: Local APIC address 0xfee00000
  [    0.000000] No NUMA configuration found
  [    0.000000] Faking a node at [mem 0x0000000000000000-0x000000031f5fffff]
  [    0.000000] NODE_DATA(0) allocated [mem 0x31f5fb000-0x31f5fffff]
  [    0.000000] Zone ranges:
  [    0.000000]   DMA      [mem 0x0000000000001000-0x0000000000ffffff]
  [    0.000000]   DMA32    [mem 0x0000000001000000-0x00000000ffffffff]
  [    0.000000]   Normal   [mem 0x0000000100000000-0x000000031f5fffff]
  [    0.000000]   Device   empty
  [    0.000000] Movable zone start for each node
  [    0.000000] Early memory node ranges
  [    0.000000]   node   0: [mem 0x0000000000001000-0x000000000009cfff]
  [    0.000000]   node   0: [mem 0x0000000000100000-0x00000000ce1e6fff]
  [    0.000000]   node   0: [mem 0x0000000100000000-0x000000031f5fffff]
  [    0.000000] Initmem setup node 0 [mem 0x0000000000001000-0x000000031f5fffff]
  [    0.000000] On node 0 totalpages: 3069827
  [    0.000000]   DMA zone: 64 pages used for memmap
  [    0.000000]   DMA zone: 21 pages reserved
  [    0.000000]   DMA zone: 3996 pages, LIFO batch:0
  [    0.000000]   DMA32 zone: 13128 pages used for memmap
  [    0.000000]   DMA32 zone: 840167 pages, LIFO batch:31
  [    0.000000]   Normal zone: 34776 pages used for memmap
  [    0.000000]   Normal zone: 2225664 pages, LIFO batch:31
  [    0.000000] Reserving Intel graphics memory at 0x00000000dda00000-0x00000000df9fffff
  [    0.000000] ACPI: PM-Timer IO Port: 0x1808
  [    0.000000] ACPI: Local APIC address 0xfee00000
  [    0.000000] ACPI: LAPIC_NMI (acpi_id[0x00] high edge lint[0x1])
  [    0.000000] ACPI: LAPIC_NMI (acpi_id[0x01] high edge lint[0x1])
  [    0.000000] IOAPIC[0]: apic_id 2, version 32, address 0xfec00000, GSI 0-39
  [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 0 global_irq 2 dfl dfl)
  [    0.000000] ACPI: INT_SRC_OVR (bus 0 bus_irq 9 global_irq 9 high level)
  [    0.000000] ACPI: IRQ0 used by override.
  [    0.000000] ACPI: IRQ9 used by override.
  [    0.000000] Using ACPI (MADT) for SMP configuration information
  [    0.000000] ACPI: HPET id: 0x8086a301 base: 0xfed00000
  [    0.000000] smpboot: Allowing 8 CPUs, 4 hotplug CPUs
  [    0.000000] PM: Registered nosave memory: [mem 0x00000000-0x00000fff]
  [    0.000000] PM: Registered nosave memory: [mem 0x0009d000-0x0009ffff]
  [    0.000000] PM: Registered nosave memory: [mem 0x000a0000-0x000dffff]
  [    0.000000] PM: Registered nosave memory: [mem 0x000e0000-0x000fffff]
  [    0.000000] PM: Registered nosave memory: [mem 0xce1e7000-0xdcd3efff]
  [    0.000000] PM: Registered nosave memory: [mem 0xdcd3f000-0xdce7efff]
  [    0.000000] PM: Registered nosave memory: [mem 0xdce7f000-0xdcefefff]
  [    0.000000] PM: Registered nosave memory: [mem 0xdceff000-0xdf9fffff]
  [    0.000000] PM: Registered nosave memory: [mem 0xdfa00000-0xf7ffffff]
  [    0.000000] PM: Registered nosave memory: [mem 0xf8000000-0xfbffffff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfc000000-0xfe100fff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfe101000-0xfe112fff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfe113000-0xfebfffff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfec00000-0xfec00fff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfec01000-0xfed07fff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfed08000-0xfed08fff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfed09000-0xfed0ffff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfed10000-0xfed19fff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfed1a000-0xfed1bfff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfed1c000-0xfed1ffff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfed20000-0xfedfffff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfee00000-0xfee00fff]
  [    0.000000] PM: Registered nosave memory: [mem 0xfee01000-0xffbfffff]
  [    0.000000] PM: Registered nosave memory: [mem 0xffc00000-0xffffffff]
  [    0.000000] e820: [mem 0xdfa00000-0xf7ffffff] available for PCI devices
  [    0.000000] Booting paravirtualized kernel on bare hardware
  [    0.000000] clocksource: refined-jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 7645519600211568 ns
  [    0.000000] setup_percpu: NR_CPUS:512 nr_cpumask_bits:512 nr_cpu_ids:8 nr_node_ids:1
  [    0.000000] percpu: Embedded 38 pages/cpu @ffff9ae25f200000 s115672 r8192 d31784 u262144
  [    0.000000] pcpu-alloc: s115672 r8192 d31784 u262144 alloc=1*2097152
  [    0.000000] pcpu-alloc: [0] 0 1 2 3 4 5 6 7
  [    0.000000] Built 1 zonelists in Node order, mobility grouping on.  Total pages: 3021838
  [    0.000000] Policy zone: Normal
  [    0.000000] Kernel command line: BOOT_IMAGE=/vmlinuz-4.12.0-rc4-00122-gb29794e root=/dev/mapper/think--vg-lv_root ro cgroup_enable=memory acpi_osi=Linux acpi_backlight=vendor
  [    0.000000] PID hash table entries: 4096 (order: 3, 32768 bytes)
  [    0.000000] Calgary: detecting Calgary via BIOS EBDA area
  [    0.000000] Calgary: Unable to locate Rio Grande table in EBDA - bailing!
  [    0.000000] Memory: 11872572K/12279308K available (6489K kernel code, 1255K rwdata, 2904K rodata, 1488K init, 692K bss, 406736K reserved, 0K cma-reserved)
  [    0.000000] ftrace: allocating 28518 entries in 112 pages
  [    0.000000] Hierarchical RCU implementation.
  [    0.000000] 	RCU restricting CPUs from NR_CPUS=512 to nr_cpu_ids=8.
  [    0.000000] RCU: Adjusting geometry for rcu_fanout_leaf=16, nr_cpu_ids=8
  [    0.000000] NR_IRQS:33024 nr_irqs:760 16
  [    0.000000] Console: colour VGA+ 80x25
  [    0.000000] console [tty0] enabled
  [    0.000000] clocksource: hpet: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 133484882848 ns
  [    0.000000] hpet clockevent registered
  [    0.000000] tsc: Fast TSC calibration using PIT
  [    0.004000] tsc: Detected 2294.633 MHz processor
  [    0.004000] Calibrating delay loop (skipped), value calculated using timer frequency.. 4589.26 BogoMIPS (lpj=9178532)
  [    0.004000] pid_max: default: 32768 minimum: 301
  [    0.004000] ACPI: Core revision 20170303
  [    0.037397] ACPI: 9 ACPI AML tables successfully acquired and loaded
  [    0.037597] Security Framework initialized
  [    0.037684] Yama: becoming mindful.
  [    0.037776] AppArmor: AppArmor disabled by boot time parameter
  [    0.039886] Dentry cache hash table entries: 2097152 (order: 12, 16777216 bytes)
  [    0.049103] Inode-cache hash table entries: 1048576 (order: 11, 8388608 bytes)
  [    0.052891] Mount-cache hash table entries: 32768 (order: 6, 262144 bytes)
  [    0.053020] Mountpoint-cache hash table entries: 32768 (order: 6, 262144 bytes)
  [    0.053715] CPU: Physical Processor ID: 0
  [    0.053800] CPU: Processor Core ID: 0
  [    0.053891] ENERGY_PERF_BIAS: Set to 'normal', was 'performance'
  [    0.053981] ENERGY_PERF_BIAS: View and update with x86_energy_perf_policy(8)
  [    0.054083] mce: CPU supports 7 MCE banks
  [    0.054186] CPU0: Thermal monitoring enabled (TM1)
  [    0.054300] process: using mwait in idle threads
  [    0.054390] Last level iTLB entries: 4KB 1024, 2MB 1024, 4MB 1024
  [    0.054482] Last level dTLB entries: 4KB 1024, 2MB 1024, 4MB 1024, 1GB 4
  [    0.056630] Freeing SMP alternatives memory: 24K
  [    0.059757] smpboot: Max logical packages: 4
  [    0.060516] ..TIMER: vector=0x30 apic1=0 pin1=2 apic2=-1 pin2=-1
  [    0.100310] TSC deadline timer enabled
  [    0.100315] smpboot: CPU0: Intel(R) Core(TM) i5-4200U CPU @ 1.60GHz (family: 0x6, model: 0x45, stepping: 0x1)
  [    0.100586] Performance Events: PEBS fmt2+, Haswell events, 16-deep LBR, full-width counters, Intel PMU driver.
  [    0.100810] ... version:                3
  [    0.100893] ... bit width:              48
  [    0.100977] ... generic registers:      4
  [    0.102363] ... value mask:             0000ffffffffffff
  [    0.102452] ... max period:             00007fffffffffff
  [    0.102540] ... fixed-purpose events:   3
  [    0.102623] ... event mask:             000000070000000f
  [    0.103978] NMI watchdog: enabled on all CPUs, permanently consumes one hw-PMU counter.
  [    0.104000] smp: Bringing up secondary CPUs ...
  [    0.104103] x86: Booting SMP configuration:
  [    0.104189] .... node  #0, CPUs:      #1 #2 #3
  [    0.352092] smp: Brought up 1 node, 4 CPUs
  [    0.352182] smpboot: Total of 4 processors activated (18366.88 BogoMIPS)
  [    0.356288] sched_clock: Marking stable (356000000, 0)->(356758583, -758583)
  [    0.357008] devtmpfs: initialized
  [    0.357210] x86/mm: Memory block size: 128MB
  [    0.367126] PM: Registering ACPI NVS region [mem 0xdcd3f000-0xdce7efff] (1310720 bytes)
  [    0.367426] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 7645041785100000 ns
  [    0.367579] futex hash table entries: 2048 (order: 5, 131072 bytes)
  [    0.367806] pinctrl core: initialized pinctrl subsystem
  [    0.368160] NET: Registered protocol family 16
  [    0.368680] cpuidle: using governor ladder
  [    0.368847] cpuidle: using governor menu
  [    0.368935] PCCT header not found.
  [    0.369087] ACPI FADT declares the system doesn't support PCIe ASPM, so disable it
  [    0.369208] ACPI: bus type PCI registered
  [    0.369293] acpiphp: ACPI Hot Plug PCI Controller Driver version: 0.5
  [    0.369673] PCI: MMCONFIG for domain 0000 [bus 00-3f] at [mem 0xf8000000-0xfbffffff] (base 0xf8000000)
  [    0.369819] PCI: MMCONFIG at [mem 0xf8000000-0xfbffffff] reserved in E820
  [    0.369923] PCI: Using configuration type 1 for base access
  [    0.370112] core: PMU erratum BJ122, BV98, HSD29 worked around, HT is on
  [    0.372543] HugeTLB registered 1 GB page size, pre-allocated 0 pages
  [    0.372638] HugeTLB registered 2 MB page size, pre-allocated 0 pages
  [    0.373286] ACPI: Added _OSI(Module Device)
  [    0.373373] ACPI: Added _OSI(Processor Device)
  [    0.373459] ACPI: Added _OSI(3.0 _SCP Extensions)
  [    0.373546] ACPI: Added _OSI(Processor Aggregator Device)
  [    0.373635] ACPI: Added _OSI(Linux)
  [    0.373733] ACPI : EC: EC started
  [    0.373814] ACPI : EC: interrupt blocked
  [    0.375932] ACPI: \: Used as first EC
  [    0.376018] ACPI: \: GPE=0x25, EC_CMD/EC_SC=0x66, EC_DATA=0x62
  [    0.376122] ACPI: \: Used as boot ECDT EC to handle transactions
  [    0.385999] ACPI: [Firmware Bug]: BIOS _OSI(Linux) query honored via cmdline
  [    0.396173] ACPI Error: Needed type [Reference], found [Integer] ffff9ae250e4b288 (20170303/exresop-103)
  [    0.396311] ACPI Exception: AE_AML_OPERAND_TYPE, While resolving operands for [OpcodeName unavailable] (20170303/dswexec-461)
  [    0.396451] ACPI Error: Method parse/execution failed [\_PR.CPU0._PDC] (Node ffff9ae252d57640), AE_AML_OPERAND_TYPE (20170303/psparse-543)
  [    0.397232] ACPI: Dynamic OEM Table Load:
  [    0.397338] ACPI: SSDT 0xFFFF9AE250E4A000 0005AA (v01 PmRef  ApIst    00003000 INTL 20120711)
  [    0.398476] ACPI: Dynamic OEM Table Load:
  [    0.398576] ACPI: SSDT 0xFFFF9AE250DFC400 000119 (v01 PmRef  ApCst    00003000 INTL 20120711)
  [    0.400926] ACPI : EC: EC stopped
  [    0.401011] ACPI : EC: EC started
  [    0.401093] ACPI : EC: interrupt blocked
  [    0.401541] ACPI: \_SB_.PCI0.LPC_.EC__: Used as first EC
  [    0.401632] ACPI: \_SB_.PCI0.LPC_.EC__: GPE=0x25, EC_CMD/EC_SC=0x66, EC_DATA=0x62
  [    0.401754] ACPI: \_SB_.PCI0.LPC_.EC__: Used as boot DSDT EC to handle transactions
  [    0.401874] ACPI: Interpreter enabled
  [    0.402010] ACPI: (supports S0 S3 S4 S5)
  [    0.402095] ACPI: Using IOAPIC for interrupt routing
  [    0.402236] PCI: Using host bridge windows from ACPI; if necessary, use "pci=nocrs" and report a bug
  [    0.409308] ACPI: Power Resource [PUBS] (on)
  [    0.410628] acpi PNP0C0A:01: ACPI dock station (docks/bays count: 1)
  [    0.411188] ACPI: Power Resource [NVP3] (on)
  [    0.411338] ACPI: Power Resource [NVP2] (on)
  [    0.419077] ACPI: PCI Interrupt Link [LNKA] (IRQs 3 4 5 6 7 9 10 *11)
  [    0.419376] ACPI: PCI Interrupt Link [LNKB] (IRQs 3 4 5 6 7 *9 10 11)
  [    0.419664] ACPI: PCI Interrupt Link [LNKC] (IRQs 3 4 5 6 7 9 *10 11)
  [    0.419950] ACPI: PCI Interrupt Link [LNKD] (IRQs 3 4 5 *6 7 9 10 11)
  [    0.420249] ACPI: PCI Interrupt Link [LNKE] (IRQs 3 4 5 6 7 9 10 *11)
  [    0.420491] ACPI: PCI Interrupt Link [LNKF] (IRQs 3 4 5 6 7 9 10 11) *0, disabled.
  [    0.420805] ACPI: PCI Interrupt Link [LNKG] (IRQs 3 4 5 6 7 9 *10 11)
  [    0.421089] ACPI: PCI Interrupt Link [LNKH] (IRQs 3 4 5 6 *7 9 10 11)
  [    0.421400] ACPI: PCI Root Bridge [PCI0] (domain 0000 [bus 00-3f])
  [    0.421499] acpi PNP0A08:00: _OSC: OS supports [ExtendedConfig ASPM ClockPM Segments MSI]
  [    0.421923] acpi PNP0A08:00: _OSC: platform does not support [PCIeCapability]
  [    0.422149] acpi PNP0A08:00: _OSC: not requesting control; platform does not support [PCIeCapability]
  [    0.422277] acpi PNP0A08:00: _OSC: OS requested [PCIeHotplug PME AER PCIeCapability]
  [    0.422400] acpi PNP0A08:00: _OSC: platform willing to grant [PCIeHotplug PME AER]
  [    0.422521] acpi PNP0A08:00: _OSC failed (AE_SUPPORT); disabling ASPM
  [    0.422992] PCI host bridge to bus 0000:00
  [    0.423081] pci_bus 0000:00: root bus resource [io  0x0000-0x0cf7 window]
  [    0.423176] pci_bus 0000:00: root bus resource [io  0x0d00-0xffff window]
  [    0.423271] pci_bus 0000:00: root bus resource [mem 0x000a0000-0x000bffff window]
  [    0.423393] pci_bus 0000:00: root bus resource [mem 0xdfa00000-0xfebfffff window]
  [    0.423514] pci_bus 0000:00: root bus resource [mem 0xfed40000-0xfed4bfff window]
  [    0.423635] pci_bus 0000:00: root bus resource [bus 00-3f]
  [    0.423739] pci 0000:00:00.0: [8086:0a04] type 00 class 0x060000
  [    0.423932] pci 0000:00:02.0: [8086:0a16] type 00 class 0x030000
  [    0.423956] pci 0000:00:02.0: reg 0x10: [mem 0xf0000000-0xf03fffff 64bit]
  [    0.423971] pci 0000:00:02.0: reg 0x18: [mem 0xe0000000-0xefffffff 64bit pref]
  [    0.423982] pci 0000:00:02.0: reg 0x20: [io  0x3000-0x303f]
  [    0.424179] pci 0000:00:03.0: [8086:0a0c] type 00 class 0x040300
  [    0.424200] pci 0000:00:03.0: reg 0x10: [mem 0xf0630000-0xf0633fff 64bit]
  [    0.424424] pci 0000:00:14.0: [8086:9c31] type 00 class 0x0c0330
  [    0.424451] pci 0000:00:14.0: reg 0x10: [mem 0xf0620000-0xf062ffff 64bit]
  [    0.424549] pci 0000:00:14.0: PME# supported from D3hot D3cold
  [    0.424625] pci 0000:00:14.0: System wakeup disabled by ACPI
  [    0.424784] pci 0000:00:16.0: [8086:9c3a] type 00 class 0x078000
  [    0.424813] pci 0000:00:16.0: reg 0x10: [mem 0xf0639000-0xf063901f 64bit]
  [    0.424920] pci 0000:00:16.0: PME# supported from D0 D3hot D3cold
  [    0.425058] pci 0000:00:19.0: [8086:1559] type 00 class 0x020000
  [    0.425081] pci 0000:00:19.0: reg 0x10: [mem 0xf0600000-0xf061ffff]
  [    0.425094] pci 0000:00:19.0: reg 0x14: [mem 0xf063e000-0xf063efff]
  [    0.425107] pci 0000:00:19.0: reg 0x18: [io  0x3080-0x309f]
  [    0.425198] pci 0000:00:19.0: PME# supported from D0 D3hot D3cold
  [    0.425273] pci 0000:00:19.0: System wakeup disabled by ACPI
  [    0.425431] pci 0000:00:1b.0: [8086:9c20] type 00 class 0x040300
  [    0.425457] pci 0000:00:1b.0: reg 0x10: [mem 0xf0634000-0xf0637fff 64bit]
  [    0.425566] pci 0000:00:1b.0: PME# supported from D0 D3hot D3cold
  [    0.425701] pci 0000:00:1c.0: [8086:9c1a] type 01 class 0x060400
  [    0.425808] pci 0000:00:1c.0: PME# supported from D0 D3hot D3cold
  [    0.426057] pci 0000:00:1c.1: [8086:9c14] type 01 class 0x060400
  [    0.426171] pci 0000:00:1c.1: PME# supported from D0 D3hot D3cold
  [    0.426341] pci 0000:00:1c.1: System wakeup disabled by ACPI
  [    0.426507] pci 0000:00:1d.0: [8086:9c26] type 00 class 0x0c0320
  [    0.426534] pci 0000:00:1d.0: reg 0x10: [mem 0xf063d000-0xf063d3ff]
  [    0.426662] pci 0000:00:1d.0: PME# supported from D0 D3hot D3cold
  [    0.426740] pci 0000:00:1d.0: System wakeup disabled by ACPI
  [    0.426896] pci 0000:00:1f.0: [8086:9c43] type 00 class 0x060100
  [    0.427176] pci 0000:00:1f.2: [8086:9c03] type 00 class 0x010601
  [    0.427198] pci 0000:00:1f.2: reg 0x10: [io  0x30a8-0x30af]
  [    0.427210] pci 0000:00:1f.2: reg 0x14: [io  0x30b4-0x30b7]
  [    0.427222] pci 0000:00:1f.2: reg 0x18: [io  0x30a0-0x30a7]
  [    0.427234] pci 0000:00:1f.2: reg 0x1c: [io  0x30b0-0x30b3]
  [    0.427246] pci 0000:00:1f.2: reg 0x20: [io  0x3060-0x307f]
  [    0.427258] pci 0000:00:1f.2: reg 0x24: [mem 0xf063c000-0xf063c7ff]
  [    0.427318] pci 0000:00:1f.2: PME# supported from D3hot
  [    0.427447] pci 0000:00:1f.3: [8086:9c22] type 00 class 0x0c0500
  [    0.427470] pci 0000:00:1f.3: reg 0x10: [mem 0xf0638000-0xf06380ff 64bit]
  [    0.427502] pci 0000:00:1f.3: reg 0x20: [io  0xefa0-0xefbf]
  [    0.427776] pci 0000:02:00.0: [10ec:5227] type 00 class 0xff0000
  [    0.427855] pci 0000:02:00.0: reg 0x10: [mem 0xf0500000-0xf0500fff]
  [    0.428356] pci 0000:02:00.0: supports D1 D2
  [    0.428359] pci 0000:02:00.0: PME# supported from D1 D2 D3hot D3cold
  [    0.440183] pci 0000:00:1c.0: PCI bridge to [bus 02]
  [    0.440278] pci 0000:00:1c.0:   bridge window [mem 0xf0500000-0xf05fffff]
  [    0.440571] pci 0000:03:00.0: [8086:08b2] type 00 class 0x028000
  [    0.440730] pci 0000:03:00.0: reg 0x10: [mem 0xf0400000-0xf0401fff 64bit]
  [    0.441150] pci 0000:03:00.0: PME# supported from D0 D3hot D3cold
  [    0.452309] pci 0000:00:1c.1: PCI bridge to [bus 03]
  [    0.452404] pci 0000:00:1c.1:   bridge window [mem 0xf0400000-0xf04fffff]
  [    0.454539] ACPI: Enabled 4 GPEs in block 00 to 7F
  [    0.454813] ACPI : EC: interrupt unblocked
  [    0.454906] ACPI : EC: event unblocked
  [    0.454999] ACPI: \_SB_.PCI0.LPC_.EC__: GPE=0x25, EC_CMD/EC_SC=0x66, EC_DATA=0x62
  [    0.455121] ACPI: \_SB_.PCI0.LPC_.EC__: Used as boot DSDT EC to handle transactions and events
  [    0.455406] pci 0000:00:02.0: vgaarb: setting as boot VGA device
  [    0.455500] pci 0000:00:02.0: vgaarb: VGA device added: decodes=io+mem,owns=io+mem,locks=none
  [    0.455629] pci 0000:00:02.0: vgaarb: bridge control possible
  [    0.455719] vgaarb: loaded
  [    0.455889] EDAC MC: Ver: 3.0.0
  [    0.456502] PCI: Using ACPI for IRQ routing
  [    0.458794] PCI: pci_cache_line_size set to 64 bytes
  [    0.459135] e820: reserve RAM buffer [mem 0x0009d000-0x0009ffff]
  [    0.459138] e820: reserve RAM buffer [mem 0xce1e7000-0xcfffffff]
  [    0.459141] e820: reserve RAM buffer [mem 0x31f600000-0x31fffffff]
  [    0.459475] hpet0: at MMIO 0xfed00000, IRQs 2, 8, 0, 0, 0, 0, 0, 0
  [    0.459579] hpet0: 8 comparators, 64-bit 14.318180 MHz counter
  [    0.461712] clocksource: Switched to clocksource hpet
  [    0.482677] VFS: Disk quotas dquot_6.6.0
  [    0.482810] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
  [    0.483089] pnp: PnP ACPI init
  [    0.484162] system 00:00: [mem 0x00000000-0x0009ffff] could not be reserved
  [    0.484261] system 00:00: [mem 0x000c0000-0x000c3fff] could not be reserved
  [    0.484357] system 00:00: [mem 0x000c4000-0x000c7fff] could not be reserved
  [    0.484453] system 00:00: [mem 0x000c8000-0x000cbfff] could not be reserved
  [    0.484549] system 00:00: [mem 0x000cc000-0x000cffff] could not be reserved
  [    0.484645] system 00:00: [mem 0x000d0000-0x000d3fff] has been reserved
  [    0.484740] system 00:00: [mem 0x000d4000-0x000d7fff] has been reserved
  [    0.484834] system 00:00: [mem 0x000d8000-0x000dbfff] has been reserved
  [    0.484929] system 00:00: [mem 0x000dc000-0x000dffff] has been reserved
  [    0.485024] system 00:00: [mem 0x000e0000-0x000e3fff] could not be reserved
  [    0.485120] system 00:00: [mem 0x000e4000-0x000e7fff] could not be reserved
  [    0.485216] system 00:00: [mem 0x000e8000-0x000ebfff] could not be reserved
  [    0.485311] system 00:00: [mem 0x000ec000-0x000effff] could not be reserved
  [    0.485407] system 00:00: [mem 0x000f0000-0x000fffff] could not be reserved
  [    0.485503] system 00:00: [mem 0x00100000-0xdf9fffff] could not be reserved
  [    0.485599] system 00:00: [mem 0xfec00000-0xfed3ffff] could not be reserved
  [    0.485696] system 00:00: [mem 0xfed4c000-0xffffffff] could not be reserved
  [    0.485812] system 00:00: Plug and Play ACPI device, IDs PNP0c01 (active)
  [    0.486039] pnp 00:01: [Firmware Bug]: PNP resource [mem 0xfed10000-0xfed13fff] covers only part of 0000:00:00.0 Intel MCH; extending to [mem 0xfed10000-0xfed17fff]
  [    0.486250] system 00:01: [io  0x1800-0x189f] has been reserved
  [    0.486344] system 00:01: [io  0x0800-0x087f] has been reserved
  [    0.486436] system 00:01: [io  0x0880-0x08ff] has been reserved
  [    0.486529] system 00:01: [io  0x0900-0x097f] has been reserved
  [    0.486621] system 00:01: [io  0x0980-0x09ff] has been reserved
  [    0.486715] system 00:01: [io  0x0a00-0x0a7f] has been reserved
  [    0.486807] system 00:01: [io  0x0a80-0x0aff] has been reserved
  [    0.486899] system 00:01: [io  0x0b00-0x0b7f] has been reserved
  [    0.486991] system 00:01: [io  0x0b80-0x0bff] has been reserved
  [    0.487084] system 00:01: [io  0x15e0-0x15ef] has been reserved
  [    0.487176] system 00:01: [io  0x1600-0x167f] has been reserved
  [    0.487268] system 00:01: [io  0x1640-0x165f] has been reserved
  [    0.487362] system 00:01: [mem 0xf8000000-0xfbffffff] has been reserved
  [    0.487457] system 00:01: [mem 0x00000000-0x00000fff] could not be reserved
  [    0.487553] system 00:01: [mem 0xfed1c000-0xfed1ffff] has been reserved
  [    0.487648] system 00:01: [mem 0xfed10000-0xfed17fff] has been reserved
  [    0.487743] system 00:01: [mem 0xfed18000-0xfed18fff] has been reserved
  [    0.487837] system 00:01: [mem 0xfed19000-0xfed19fff] has been reserved
  [    0.487932] system 00:01: [mem 0xfed45000-0xfed4bfff] has been reserved
  [    0.488029] system 00:01: Plug and Play ACPI device, IDs PNP0c02 (active)
  [    0.488155] pnp 00:02: Plug and Play ACPI device, IDs PNP0b00 (active)
  [    0.488202] pnp 00:03: Plug and Play ACPI device, IDs LEN0071 PNP0303 (active)
  [    0.488245] pnp 00:04: Plug and Play ACPI device, IDs LEN0036 PNP0f13 (active)
  [    0.488345] pnp 00:05: Plug and Play ACPI device, IDs SMO1200 PNP0c31 (active)
  [    0.489064] pnp: PnP ACPI: found 6 devices
  [    0.496940] clocksource: acpi_pm: mask: 0xffffff max_cycles: 0xffffff, max_idle_ns: 2085701024 ns
  [    0.497105] pci 0000:00:1c.0: PCI bridge to [bus 02]
  [    0.497200] pci 0000:00:1c.0:   bridge window [mem 0xf0500000-0xf05fffff]
  [    0.497304] pci 0000:00:1c.1: PCI bridge to [bus 03]
  [    0.497397] pci 0000:00:1c.1:   bridge window [mem 0xf0400000-0xf04fffff]
  [    0.497504] pci_bus 0000:00: resource 4 [io  0x0000-0x0cf7 window]
  [    0.497507] pci_bus 0000:00: resource 5 [io  0x0d00-0xffff window]
  [    0.497510] pci_bus 0000:00: resource 6 [mem 0x000a0000-0x000bffff window]
  [    0.497513] pci_bus 0000:00: resource 7 [mem 0xdfa00000-0xfebfffff window]
  [    0.497516] pci_bus 0000:00: resource 8 [mem 0xfed40000-0xfed4bfff window]
  [    0.497519] pci_bus 0000:02: resource 1 [mem 0xf0500000-0xf05fffff]
  [    0.497522] pci_bus 0000:03: resource 1 [mem 0xf0400000-0xf04fffff]
  [    0.497748] NET: Registered protocol family 2
  [    0.498256] TCP established hash table entries: 131072 (order: 8, 1048576 bytes)
  [    0.500163] TCP bind hash table entries: 65536 (order: 8, 1048576 bytes)
  [    0.500513] TCP: Hash tables configured (established 131072 bind 65536)
  [    0.500702] UDP hash table entries: 8192 (order: 6, 262144 bytes)
  [    0.500901] UDP-Lite hash table entries: 8192 (order: 6, 262144 bytes)
  [    0.501178] NET: Registered protocol family 1
  [    0.501293] pci 0000:00:02.0: Video device with shadowed ROM at [mem 0x000c0000-0x000dffff]
  [    0.502258] PCI: CLS 64 bytes, default 64
  [    0.502337] Unpacking initramfs...
  [    6.457944] Freeing initrd memory: 131024K
  [    6.458072] PCI-DMA: Using software bounce buffering for IO (SWIOTLB)
  [    6.458175] software IO TLB [mem 0xca1e7000-0xce1e7000] (64MB) mapped at [ffff9ae00a1e7000-ffff9ae00e1e6fff]
  [    6.458445] RAPL PMU: API unit is 2^-32 Joules, 4 fixed counters, 655360 ms ovfl timer
  [    6.458568] RAPL PMU: hw unit of domain pp0-core 2^-14 Joules
  [    6.458657] RAPL PMU: hw unit of domain package 2^-14 Joules
  [    6.458747] RAPL PMU: hw unit of domain dram 2^-14 Joules
  [    6.458836] RAPL PMU: hw unit of domain pp1-gpu 2^-14 Joules
  [    6.459858] audit: initializing netlink subsys (disabled)
  [    6.460046] audit: type=2000 audit(1497036896.458:1): state=initialized audit_enabled=0 res=1
  [    6.461096] Initialise system trusted keyrings
  [    6.461248] workingset: timestamp_bits=40 max_order=22 bucket_order=0
  [    6.461411] zbud: loaded
  [    6.581422] Key type asymmetric registered
  [    6.581511] Asymmetric key parser 'x509' registered
  [    6.581625] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 250)
  [    6.581802] io scheduler noop registered
  [    6.581907] io scheduler deadline registered
  [    6.582009] io scheduler cfq registered (default)
  [    6.582096] io scheduler mq-deadline registered
  [    6.582182] io scheduler kyber registered
  [    6.582922] intel_idle: MWAIT substates: 0x11142120
  [    6.582925] intel_idle: v0.4.1 model 0x45
  [    6.583344] intel_idle: lapic_timer_reliable_states 0xffffffff
  [    6.583652] GHES: HEST is not enabled!
  [    6.583866] Serial: 8250/16550 driver, 4 ports, IRQ sharing enabled
  [    6.584674] Linux agpgart interface v0.103
  [    6.584855] AMD IOMMUv2 driver by Joerg Roedel <jroedel@suse.de>
  [    6.584946] AMD IOMMUv2 functionality not available on this system
  [    6.585692] i8042: PNP: PS/2 Controller [PNP0303:KBD,PNP0f13:MOU] at 0x60,0x64 irq 1,12
  [    6.588070] serio: i8042 KBD port at 0x60,0x64 irq 1
  [    6.588166] serio: i8042 AUX port at 0x60,0x64 irq 12
  [    6.588580] mousedev: PS/2 mouse device common for all mice
  [    6.588740] rtc_cmos 00:02: RTC can wake from S4
  [    6.589102] rtc_cmos 00:02: rtc core: registered rtc_cmos as rtc0
  [    6.589257] rtc_cmos 00:02: alarms up to one month, y3k, 114 bytes nvram, hpet irqs
  [    6.589428] device-mapper: uevent: version 1.0.3
  [    6.589638] device-mapper: ioctl: 4.35.0-ioctl (2016-06-23) initialised: dm-devel@redhat.com
  [    6.589775] intel_pstate: Intel P-state driver initializing
  [    6.590377] ledtrig-cpu: registered to indicate activity on CPUs
  [    6.590579] input: AT Translated Set 2 keyboard as /devices/platform/i8042/serio0/input/input0
  [    6.591756] NET: Registered protocol family 10
  [    6.592272] Segment Routing with IPv6
  [    6.592388] mip6: Mobile IPv6
  [    6.592471] NET: Registered protocol family 17
  [    6.592559] mpls_gso: MPLS GSO support
  [    6.593141] microcode: sig=0x40651, pf=0x40, revision=0x20
  [    6.593371] microcode: Microcode Update Driver: v2.2.
  [    6.593655] registered taskstats version 1
  [    6.593828] Loading compiled-in X.509 certificates
  [    6.593987] zswap: loaded using pool lzo/zbud
  [    6.595037] rtc_cmos 00:02: setting system clock to 2017-06-09 19:34:57 UTC (1497036897)
  [    6.595892] PM: Hibernation image not present or could not be loaded.
  [    6.599286] Freeing unused kernel memory: 1488K
  [    6.599375] Write protecting the kernel read-only data: 12288k
  [    6.600846] Freeing unused kernel memory: 1688K
  [    6.604590] Freeing unused kernel memory: 1192K
  [    6.606019] x86/mm: Checked W+X mappings: passed, no W+X pages found.
  [    6.654742] random: systemd-udevd: uninitialized urandom read (16 bytes read)
  [    6.654879] random: systemd-udevd: uninitialized urandom read (16 bytes read)
  [    6.654966] random: systemd-udevd: uninitialized urandom read (16 bytes read)
  [    6.655040] random: systemd-udevd: uninitialized urandom read (16 bytes read)
  [    6.655119] random: systemd-udevd: uninitialized urandom read (16 bytes read)
  [    6.655570] random: udevadm: uninitialized urandom read (16 bytes read)
  [    6.655663] random: udevadm: uninitialized urandom read (16 bytes read)
  [    6.656599] random: udevadm: uninitialized urandom read (16 bytes read)
  [    6.656703] random: udevadm: uninitialized urandom read (16 bytes read)
  [    6.656776] random: udevadm: uninitialized urandom read (16 bytes read)
  [    6.670038] button: module verification failed: signature and/or required key missing - tainting kernel
  [    6.671708] input: Lid Switch as /devices/LNXSYSTM:00/LNXSYBUS:00/PNP0C0D:00/input/input4
  [    6.683563] (NULL device *): hwmon_device_register() is deprecated. Please convert the driver to use hwmon_device_register_with_info().
  [    6.684119] thermal LNXTHERM:00: registered as thermal_zone0
  [    6.684191] ACPI: Thermal Zone [THM0] (32 C)
  [    6.684776] ACPI: bus type USB registered
  [    6.684877] usbcore: registered new interface driver usbfs
  [    6.684968] usbcore: registered new interface driver hub
  [    6.685067] usbcore: registered new device driver usb
  [    6.688338] xhci_hcd 0000:00:14.0: xHCI Host Controller
  [    6.688430] xhci_hcd 0000:00:14.0: new USB bus registered, assigned bus number 1
  [    6.689601] xhci_hcd 0000:00:14.0: hcc params 0x200077c1 hci version 0x100 quirks 0x0004b810
  [    6.689694] xhci_hcd 0000:00:14.0: cache line size of 64 is not supported
  [    6.689781] SCSI subsystem initialized
  [    6.690024] usb usb1: New USB device found, idVendor=1d6b, idProduct=0002
  [    6.690095] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
  [    6.690179] usb usb1: Product: xHCI Host Controller
  [    6.690247] usb usb1: Manufacturer: Linux 4.12.0-rc4-00122-gb29794e xhci-hcd
  [    6.690322] usb usb1: SerialNumber: 0000:00:14.0
  [    6.690659] hub 1-0:1.0: USB hub found
  [    6.690752] hub 1-0:1.0: 9 ports detected
  [    6.692619] libata version 3.00 loaded.
  [    6.693307] xhci_hcd 0000:00:14.0: xHCI Host Controller
  [    6.693380] xhci_hcd 0000:00:14.0: new USB bus registered, assigned bus number 2
  [    6.693512] usb usb2: New USB device found, idVendor=1d6b, idProduct=0003
  [    6.693584] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
  [    6.693672] usb usb2: Product: xHCI Host Controller
  [    6.693739] usb usb2: Manufacturer: Linux 4.12.0-rc4-00122-gb29794e xhci-hcd
  [    6.693810] usb usb2: SerialNumber: 0000:00:14.0
  [    6.694004] ACPI: Lid Switch [LID]
  [    6.694138] input: Sleep Button as /devices/LNXSYSTM:00/LNXSYBUS:00/PNP0C0E:00/input/input5
  [    6.694351] hub 2-0:1.0: USB hub found
  [    6.694423] hub 2-0:1.0: 4 ports detected
  [    6.695451] ahci 0000:00:1f.2: version 3.0
  [    6.699436] AVX2 version of gcm_enc/dec engaged.
  [    6.699503] AES CTR mode by8 optimization enabled
  [    6.705672] ahci 0000:00:1f.2: AHCI 0001.0300 32 slots 3 ports 6 Gbps 0x5 impl SATA mode
  [    6.705759] ahci 0000:00:1f.2: flags: 64bit ncq pm led clo only pio slum part deso sadm sds apst
  [    6.705869] ACPI: Sleep Button [SLPB]
  [    6.706025] input: Power Button as /devices/LNXSYSTM:00/LNXPWRBN:00/input/input6
  [    6.706487] wmi: Mapper loaded
  [    6.706685] scsi host0: ahci
  [    6.706848] scsi host1: ahci
  [    6.706981] scsi host2: ahci
  [    6.707103] ata1: SATA max UDMA/133 abar m2048@0xf063c000 port 0xf063c100 irq 41
  [    6.707188] ata2: DUMMY
  [    6.707249] ata3: SATA max UDMA/133 abar m2048@0xf063c000 port 0xf063c200 irq 41
  [    6.729914] ACPI: Power Button [PWRF]
  [    6.748077] [drm] Memory usable by graphics device = 2048M
  [    6.748144] [drm] Replacing VGA console driver
  [    6.748809] Console: switching to colour dummy device 80x25
  [    6.755033] [drm] Supports vblank timestamp caching Rev 2 (21.10.2013).
  [    6.755039] [drm] Driver supports precise vblank timestamp query.
  [    6.755416] i915 0000:00:02.0: vgaarb: changed VGA decodes: olddecodes=io+mem,decodes=io+mem:owns=io+mem
  [    6.763093] [drm] Initialized i915 1.6.0 20170403 for 0000:00:02.0 on minor 0
  [    6.763748] ACPI: Video Device [VID] (multi-head: yes  rom: no  post: no)
  [    6.764231] input: Video Bus as /devices/LNXSYSTM:00/LNXSYBUS:00/PNP0A08:00/LNXVIDEO:00/input/input7
  [    7.017921] usb 1-7: new full-speed USB device number 2 using xhci_hcd
  [    7.021401] ata1: SATA link up 6.0 Gbps (SStatus 133 SControl 300)
  [    7.021440] ata3: SATA link up 6.0 Gbps (SStatus 133 SControl 300)
  [    7.021813] ata3.00: ACPI cmd ef/02:00:00:00:00:a0 (SET FEATURES) succeeded
  [    7.021818] ata3.00: ACPI cmd f5/00:00:00:00:00:a0 (SECURITY FREEZE LOCK) filtered out
  [    7.021905] ata3.00: ACPI cmd ef/10:09:00:00:00:a0 (SET FEATURES) succeeded
  [    7.022339] ata3.00: ATA-9: SanDisk SSD U110 16GB, U21B001, max UDMA/133
  [    7.022350] ata3.00: 31277232 sectors, multi 1: LBA48 NCQ (depth 31/32)
  [    7.022733] ata3.00: ACPI cmd ef/02:00:00:00:00:a0 (SET FEATURES) succeeded
  [    7.022737] ata3.00: ACPI cmd f5/00:00:00:00:00:a0 (SECURITY FREEZE LOCK) filtered out
  [    7.022788] ata3.00: ACPI cmd ef/10:09:00:00:00:a0 (SET FEATURES) succeeded
  [    7.022943] ata3.00: configured for UDMA/133
  [    7.024434] ata1.00: ACPI cmd ef/02:00:00:00:00:a0 (SET FEATURES) succeeded
  [    7.024437] ata1.00: ACPI cmd f5/00:00:00:00:00:a0 (SECURITY FREEZE LOCK) filtered out
  [    7.024595] ata1.00: supports DRM functions and may not be fully accessible
  [    7.025006] ata1.00: NCQ Send/Recv Log not supported
  [    7.025016] ata1.00: ATA-9: Samsung SSD 840 EVO 500GB, EXT0BB6Q, max UDMA/133
  [    7.025023] ata1.00: 976773168 sectors, multi 1: LBA48 NCQ (depth 31/32), AA
  [    7.026446] ata1.00: ACPI cmd ef/02:00:00:00:00:a0 (SET FEATURES) succeeded
  [    7.026448] ata1.00: ACPI cmd f5/00:00:00:00:00:a0 (SECURITY FREEZE LOCK) filtered out
  [    7.026624] ata1.00: supports DRM functions and may not be fully accessible
  [    7.027006] ata1.00: NCQ Send/Recv Log not supported
  [    7.027014] ata1.00: configured for UDMA/133
  [    7.027264] scsi 0:0:0:0: Direct-Access     ATA      Samsung SSD 840  BB6Q PQ: 0 ANSI: 5
  [    7.074883] scsi 2:0:0:0: Direct-Access     ATA      SanDisk SSD U110 001  PQ: 0 ANSI: 5
  [    7.147286] fbcon: inteldrmfb (fb0) is primary device
  [    7.159547] usb 1-7: New USB device found, idVendor=8087, idProduct=07dc
  [    7.159550] usb 1-7: New USB device strings: Mfr=0, Product=0, SerialNumber=0
  [    7.277993] usb 1-8: new high-speed USB device number 3 using xhci_hcd
  [    7.485979] tsc: Refined TSC clocksource calibration: 2294.687 MHz
  [    7.485995] clocksource: tsc: mask: 0xffffffffffffffff max_cycles: 0x21139a22526, max_idle_ns: 440795252169 ns
  [    7.486531] usb 1-8: New USB device found, idVendor=5986, idProduct=026a
  [    7.486535] usb 1-8: New USB device strings: Mfr=1, Product=2, SerialNumber=0
  [    7.486538] usb 1-8: Product: Integrated Camera
  [    7.486540] usb 1-8: Manufacturer: SunplusIT INC.
  [    8.237048] Console: switching to colour frame buffer device 240x67
  [    8.264153] i915 0000:00:02.0: fb0: inteldrmfb frame buffer device
  [    8.284854] sd 0:0:0:0: [sda] 976773168 512-byte logical blocks: (500 GB/466 GiB)
  [    8.284940] sd 2:0:0:0: [sdb] 31277232 512-byte logical blocks: (16.0 GB/14.9 GiB)
  [    8.284949] sd 0:0:0:0: [sda] Write Protect is off
  [    8.284952] sd 0:0:0:0: [sda] Mode Sense: 00 3a 00 00
  [    8.284979] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
  [    8.285145] sd 2:0:0:0: [sdb] Write Protect is off
  [    8.285190] sd 2:0:0:0: [sdb] Mode Sense: 00 3a 00 00
  [    8.285220] sd 2:0:0:0: [sdb] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
  [    8.287307]  sda: sda1 sda2 < sda5 >
  [    8.287743] sd 0:0:0:0: [sda] Attached SCSI disk
  [    8.288093]  sdb: sdb1 sdb2 < sdb5 >
  [    8.288516] sd 2:0:0:0: [sdb] Attached SCSI disk
  [    8.510149] clocksource: Switched to clocksource tsc
  [    8.795597] random: fast init done
  [    8.897922] raid6: sse2x1   gen()  8105 MB/s
  [    8.965910] raid6: sse2x1   xor()  6417 MB/s
  [    9.033928] raid6: sse2x2   gen() 10272 MB/s
  [    9.101926] raid6: sse2x2   xor()  7020 MB/s
  [    9.169926] raid6: sse2x4   gen() 11939 MB/s
  [    9.237932] raid6: sse2x4   xor()  8477 MB/s
  [    9.305931] raid6: avx2x1   gen() 15916 MB/s
  [    9.373921] raid6: avx2x1   xor() 12086 MB/s
  [    9.441934] raid6: avx2x2   gen() 18312 MB/s
  [    9.509936] raid6: avx2x2   xor() 12623 MB/s
  [    9.577938] raid6: avx2x4   gen() 21267 MB/s
  [    9.645940] raid6: avx2x4   xor() 15782 MB/s
  [    9.645955] raid6: using algorithm avx2x4 gen() 21267 MB/s
  [    9.645983] raid6: .... xor() 15782 MB/s, rmw enabled
  [    9.645999] raid6: using avx2x2 recovery algorithm
  [    9.646540] async_tx: api initialized (async)
  [    9.646820] xor: automatically using best checksumming function   avx
  [   18.814176] random: crng init done
  [   18.883598] PM: Starting manual resume from disk
  [   18.886684] PM: Hibernation image partition 254:3 present
  [   18.886687] PM: Looking for hibernation image.
  [   18.886925] PM: Image not found (code -22)
  [   18.886927] PM: Hibernation image not present or could not be loaded.
  [   18.890802] PM: Marking nosave pages: [mem 0x00000000-0x00000fff]
  [   18.890804] PM: Marking nosave pages: [mem 0x0009d000-0x000fffff]
  [   18.890808] PM: Marking nosave pages: [mem 0xce1e7000-0xffffffff]
  [   18.891436] PM: Basic memory bitmaps created
  [   18.891982] PM: Basic memory bitmaps freed
  [   18.983482] EXT4-fs (dm-1): mounted filesystem with ordered data mode. Opts: (null)
  [   19.404193] ip_tables: (C) 2000-2006 Netfilter Core Team
  [   19.416318] systemd[1]: systemd 232 running in system mode. (+PAM +AUDIT +SELINUX +IMA +APPARMOR +SMACK +SYSVINIT +UTMP +LIBCRYPTSETUP +GCRYPT +GNUTLS +ACL +XZ +LZ4 +SECCOMP +BLKID +ELFUTILS +KMOD +IDN)
  [   19.417582] systemd[1]: Detected architecture x86-64.
  [   19.422499] systemd[1]: Set hostname to <think>.
