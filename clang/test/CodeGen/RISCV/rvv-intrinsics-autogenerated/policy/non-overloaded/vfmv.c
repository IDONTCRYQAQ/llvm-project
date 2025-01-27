// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: @test_vfmv_v_f_f16mf4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x half> @llvm.riscv.vfmv.v.f.nxv1f16.i64(<vscale x 1 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x half> [[TMP0]]
//
vfloat16mf4_t test_vfmv_v_f_f16mf4_tu(vfloat16mf4_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_v_f_f16mf4_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f16mf2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x half> @llvm.riscv.vfmv.v.f.nxv2f16.i64(<vscale x 2 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x half> [[TMP0]]
//
vfloat16mf2_t test_vfmv_v_f_f16mf2_tu(vfloat16mf2_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_v_f_f16mf2_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f16m1_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x half> @llvm.riscv.vfmv.v.f.nxv4f16.i64(<vscale x 4 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x half> [[TMP0]]
//
vfloat16m1_t test_vfmv_v_f_f16m1_tu(vfloat16m1_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_v_f_f16m1_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f16m2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.vfmv.v.f.nxv8f16.i64(<vscale x 8 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vfmv_v_f_f16m2_tu(vfloat16m2_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_v_f_f16m2_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f16m4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.vfmv.v.f.nxv16f16.i64(<vscale x 16 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vfmv_v_f_f16m4_tu(vfloat16m4_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_v_f_f16m4_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f16m8_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.vfmv.v.f.nxv32f16.i64(<vscale x 32 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vfmv_v_f_f16m8_tu(vfloat16m8_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_v_f_f16m8_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f32mf2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vfmv.v.f.nxv1f32.i64(<vscale x 1 x float> [[MASKEDOFF:%.*]], float [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vfmv_v_f_f32mf2_tu(vfloat32mf2_t maskedoff, float src, size_t vl) {
  return vfmv_v_f_f32mf2_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f32m1_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vfmv.v.f.nxv2f32.i64(<vscale x 2 x float> [[MASKEDOFF:%.*]], float [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vfmv_v_f_f32m1_tu(vfloat32m1_t maskedoff, float src, size_t vl) {
  return vfmv_v_f_f32m1_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f32m2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vfmv.v.f.nxv4f32.i64(<vscale x 4 x float> [[MASKEDOFF:%.*]], float [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfmv_v_f_f32m2_tu(vfloat32m2_t maskedoff, float src, size_t vl) {
  return vfmv_v_f_f32m2_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f32m4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vfmv.v.f.nxv8f32.i64(<vscale x 8 x float> [[MASKEDOFF:%.*]], float [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfmv_v_f_f32m4_tu(vfloat32m4_t maskedoff, float src, size_t vl) {
  return vfmv_v_f_f32m4_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f32m8_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vfmv.v.f.nxv16f32.i64(<vscale x 16 x float> [[MASKEDOFF:%.*]], float [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfmv_v_f_f32m8_tu(vfloat32m8_t maskedoff, float src, size_t vl) {
  return vfmv_v_f_f32m8_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f64m1_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfmv.v.f.nxv1f64.i64(<vscale x 1 x double> [[MASKEDOFF:%.*]], double [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfmv_v_f_f64m1_tu(vfloat64m1_t maskedoff, double src, size_t vl) {
  return vfmv_v_f_f64m1_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f64m2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.vfmv.v.f.nxv2f64.i64(<vscale x 2 x double> [[MASKEDOFF:%.*]], double [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfmv_v_f_f64m2_tu(vfloat64m2_t maskedoff, double src, size_t vl) {
  return vfmv_v_f_f64m2_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f64m4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.vfmv.v.f.nxv4f64.i64(<vscale x 4 x double> [[MASKEDOFF:%.*]], double [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfmv_v_f_f64m4_tu(vfloat64m4_t maskedoff, double src, size_t vl) {
  return vfmv_v_f_f64m4_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_v_f_f64m8_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.vfmv.v.f.nxv8f64.i64(<vscale x 8 x double> [[MASKEDOFF:%.*]], double [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfmv_v_f_f64m8_tu(vfloat64m8_t maskedoff, double src, size_t vl) {
  return vfmv_v_f_f64m8_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f16mf4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x half> @llvm.riscv.vfmv.s.f.nxv1f16.i64(<vscale x 1 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x half> [[TMP0]]
//
vfloat16mf4_t test_vfmv_s_f_f16mf4_tu(vfloat16mf4_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_s_f_f16mf4_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f16mf2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x half> @llvm.riscv.vfmv.s.f.nxv2f16.i64(<vscale x 2 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x half> [[TMP0]]
//
vfloat16mf2_t test_vfmv_s_f_f16mf2_tu(vfloat16mf2_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_s_f_f16mf2_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f16m1_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x half> @llvm.riscv.vfmv.s.f.nxv4f16.i64(<vscale x 4 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x half> [[TMP0]]
//
vfloat16m1_t test_vfmv_s_f_f16m1_tu(vfloat16m1_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_s_f_f16m1_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f16m2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.vfmv.s.f.nxv8f16.i64(<vscale x 8 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vfmv_s_f_f16m2_tu(vfloat16m2_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_s_f_f16m2_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f16m4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.vfmv.s.f.nxv16f16.i64(<vscale x 16 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vfmv_s_f_f16m4_tu(vfloat16m4_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_s_f_f16m4_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f16m8_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.vfmv.s.f.nxv32f16.i64(<vscale x 32 x half> [[MASKEDOFF:%.*]], half [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vfmv_s_f_f16m8_tu(vfloat16m8_t maskedoff, _Float16 src, size_t vl) {
  return vfmv_s_f_f16m8_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f32mf2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vfmv.s.f.nxv1f32.i64(<vscale x 1 x float> [[MASKEDOFF:%.*]], float [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vfmv_s_f_f32mf2_tu(vfloat32mf2_t maskedoff, float src, size_t vl) {
  return vfmv_s_f_f32mf2_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f32m1_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vfmv.s.f.nxv2f32.i64(<vscale x 2 x float> [[MASKEDOFF:%.*]], float [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vfmv_s_f_f32m1_tu(vfloat32m1_t maskedoff, float src, size_t vl) {
  return vfmv_s_f_f32m1_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f32m2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vfmv.s.f.nxv4f32.i64(<vscale x 4 x float> [[MASKEDOFF:%.*]], float [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfmv_s_f_f32m2_tu(vfloat32m2_t maskedoff, float src, size_t vl) {
  return vfmv_s_f_f32m2_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f32m4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vfmv.s.f.nxv8f32.i64(<vscale x 8 x float> [[MASKEDOFF:%.*]], float [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfmv_s_f_f32m4_tu(vfloat32m4_t maskedoff, float src, size_t vl) {
  return vfmv_s_f_f32m4_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f32m8_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vfmv.s.f.nxv16f32.i64(<vscale x 16 x float> [[MASKEDOFF:%.*]], float [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfmv_s_f_f32m8_tu(vfloat32m8_t maskedoff, float src, size_t vl) {
  return vfmv_s_f_f32m8_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f64m1_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfmv.s.f.nxv1f64.i64(<vscale x 1 x double> [[MASKEDOFF:%.*]], double [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfmv_s_f_f64m1_tu(vfloat64m1_t maskedoff, double src, size_t vl) {
  return vfmv_s_f_f64m1_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f64m2_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.vfmv.s.f.nxv2f64.i64(<vscale x 2 x double> [[MASKEDOFF:%.*]], double [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfmv_s_f_f64m2_tu(vfloat64m2_t maskedoff, double src, size_t vl) {
  return vfmv_s_f_f64m2_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f64m4_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.vfmv.s.f.nxv4f64.i64(<vscale x 4 x double> [[MASKEDOFF:%.*]], double [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfmv_s_f_f64m4_tu(vfloat64m4_t maskedoff, double src, size_t vl) {
  return vfmv_s_f_f64m4_tu(maskedoff, src, vl);
}

// CHECK-RV64-LABEL: @test_vfmv_s_f_f64m8_tu(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.vfmv.s.f.nxv8f64.i64(<vscale x 8 x double> [[MASKEDOFF:%.*]], double [[SRC:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfmv_s_f_f64m8_tu(vfloat64m8_t maskedoff, double src, size_t vl) {
  return vfmv_s_f_f64m8_tu(maskedoff, src, vl);
}

