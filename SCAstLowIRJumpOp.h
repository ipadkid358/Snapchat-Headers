/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAstLowIRBase.h>
#import <Snapchat/SCAstLowIRJumpOp.h>

@class NSString;

@interface SCAstLowIRJumpOp : SCAstLowIRBase <SCAstLowIRJumpOp> {

	long long _jump;

}

@property (assign,nonatomic) long long jump;                        //@synthesize jump=_jump - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_SC335)composeInstructionWithRegisters:(id)arg1 ;
-(void)setJump:(long long)arg1 ;
-(long long)jump;
@end

