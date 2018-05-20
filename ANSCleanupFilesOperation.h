/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL;

@interface ANSCleanupFilesOperation : NSOperation {

	/*^block*/id _successBlock;
	NSURL* _directoryUrl;
	long long _maximumPendingMultipartFiles;

}

@property (nonatomic,readonly) NSURL * directoryUrl;                                //@synthesize directoryUrl=_directoryUrl - In the implementation block
@property (nonatomic,readonly) long long maximumPendingMultipartFiles;              //@synthesize maximumPendingMultipartFiles=_maximumPendingMultipartFiles - In the implementation block
@property (nonatomic,copy) id successBlock;                                         //@synthesize successBlock=_successBlock - In the implementation block
-(NSURL *)directoryUrl;
-(long long)maximumPendingMultipartFiles;
-(id)URLsByRemovingOldFiles:(id)arg1 withMaximumFileCount:(long long)arg2 ;
-(id)successBlock;
-(id)initWithDirectoryURL:(id)arg1 maximumPendingMulitpartFiles:(long long)arg2 ;
-(void)setSuccessBlock:(id)arg1 ;
-(void)main;
@end

