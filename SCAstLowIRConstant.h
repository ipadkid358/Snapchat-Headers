/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAstLowIRBase.h>

@interface SCAstLowIRConstant : SCAstLowIRBase {

	unsigned long long _constantIndex;
	float _value;

}

@property (nonatomic,readonly) float value;                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) long long constant; 
-(void)registerRecognition:(id)arg1 ;
-(SCD_Struct_SC335)composeInstructionWithRegisters:(id)arg1 ;
-(void)allocConstant:(id)arg1 ;
-(id)initWithConstant:(float)arg1 ;
-(float)value;
-(long long)constant;
@end
