/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GPBEnumDescriptor : NSObject {

	NSString* name_;
	const char* valueNames_;
	const int* values_;
	/*function pointer*/void* enumVerifier_;
	const char* extraTextFormatInfo_;
	unsigned* nameOffsets_;
	unsigned valueCount_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) /*function pointer*/void* enumVerifier; 
+(id)allocDescriptorForName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 ;
+(id)allocDescriptorForName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 extraTextFormatInfo:(const char*)arg6 ;
-(/*function pointer*/void*)enumVerifier;
-(id)initWithName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 ;
-(void)calcValueNameOffsets;
-(id)textFormatNameForValue:(int)arg1 ;
-(id)enumNameForValue:(int)arg1 ;
-(BOOL)getValue:(int*)arg1 forEnumName:(id)arg2 ;
-(BOOL)getValue:(int*)arg1 forEnumTextFormatName:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
@end

