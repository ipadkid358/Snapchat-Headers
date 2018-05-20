/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCImageProcessRequest.h>

@class NSString;

@interface SCImageProcessScreenshotRequest : NSObject <SCImageProcessRequest> {

	/*^block*/id _completionHandler;
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
-(void)cancel;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)status;
@end

