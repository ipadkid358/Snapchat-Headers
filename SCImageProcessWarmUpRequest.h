/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCImageProcessRequest.h>

@class NSArray, NSString;

@interface SCImageProcessWarmUpRequest : NSObject <SCImageProcessRequest> {

	NSArray* _commands;
	CGSize _outputSize;
	unsigned long long _status;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL GPURequired; 
-(void)runProgramsWithContext:(id)arg1 GPUAvailable:(BOOL)arg2 ;
-(BOOL)GPURequired;
-(id)initWithCommands:(id)arg1 outputSize:(CGSize)arg2 ;
-(void)cancel;
-(unsigned long long)status;
@end
