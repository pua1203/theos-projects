/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VK_Music-Structs.h"

@class FlurryPLCrashReportApplicationInfo, FlurryPLCrashReportMachineInfo, NSArray, FlurryPLCrashReportSystemInfo, FlurryPLCrashReportProcessInfo, FlurryPLCrashReportSignalInfo, FlurryPLCrashReportMachExceptionInfo, FlurryPLCrashReportExceptionInfo;

@interface FlurryPLCrashReport : XXUnknownSuperclass {
	PLCrashReportDecoder* _decoder;
	FlurryPLCrashReportSystemInfo* _systemInfo;
	FlurryPLCrashReportMachineInfo* _machineInfo;
	FlurryPLCrashReportApplicationInfo* _applicationInfo;
	FlurryPLCrashReportProcessInfo* _processInfo;
	FlurryPLCrashReportSignalInfo* _signalInfo;
	FlurryPLCrashReportMachExceptionInfo* _machExceptionInfo;
	NSArray* _threads;
	NSArray* _images;
	FlurryPLCrashReportExceptionInfo* _exceptionInfo;
	CFUUIDRef _uuid;
}
@property(readonly, assign, nonatomic) CFUUIDRef uuidRef;
@property(readonly, assign, nonatomic) FlurryPLCrashReportExceptionInfo* exceptionInfo;
@property(readonly, assign, nonatomic) BOOL hasExceptionInfo;
@property(readonly, assign, nonatomic) NSArray* images;
@property(readonly, assign, nonatomic) NSArray* threads;
@property(readonly, assign, nonatomic) FlurryPLCrashReportMachExceptionInfo* machExceptionInfo;
@property(readonly, assign, nonatomic) FlurryPLCrashReportSignalInfo* signalInfo;
@property(readonly, assign, nonatomic) FlurryPLCrashReportProcessInfo* processInfo;
@property(readonly, assign, nonatomic) BOOL hasProcessInfo;
@property(readonly, assign, nonatomic) FlurryPLCrashReportApplicationInfo* applicationInfo;
@property(readonly, assign, nonatomic) FlurryPLCrashReportMachineInfo* machineInfo;
@property(readonly, assign, nonatomic) BOOL hasMachineInfo;
@property(readonly, assign, nonatomic) FlurryPLCrashReportSystemInfo* systemInfo;
-(id)imageForAddress:(unsigned long long)address;
-(void)dealloc;
-(id)initWithData:(id)data error:(id*)error;
-(id)extractMachExceptionInfo:(Plcrash__CrashReport__Signal__MachException*)info error:(id*)error;
-(id)extractSignalInfo:(Plcrash__CrashReport__Signal*)info error:(id*)error;
-(id)extractExceptionInfo:(Plcrash__CrashReport__Exception*)info error:(id*)error;
-(id)extractImageInfo:(Plcrash__CrashReport*)info error:(id*)error;
-(id)extractThreadInfo:(Plcrash__CrashReport*)info error:(id*)error;
-(id)extractStackFrameInfo:(Plcrash__CrashReport__Thread__StackFrame*)info error:(id*)error;
-(id)extractSymbolInfo:(Plcrash__CrashReport__Symbol*)info error:(id*)error;
-(id)extractProcessInfo:(Plcrash__CrashReport__ProcessInfo*)info error:(id*)error;
-(id)extractApplicationInfo:(Plcrash__CrashReport__ApplicationInfo*)info error:(id*)error;
-(id)extractMachineInfo:(Plcrash__CrashReport__MachineInfo*)info error:(id*)error;
-(id)extractProcessorInfo:(Plcrash__CrashReport__Processor*)info error:(id*)error;
-(id)extractSystemInfo:(Plcrash__CrashReport__SystemInfo*)info error:(id*)error;
-(Plcrash__CrashReport*)decodeCrashData:(id)data error:(id*)error;
@end
