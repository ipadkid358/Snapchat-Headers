/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchItemDownloader.h>

@class SCSessionRequestManager;

@interface SCSearchSnapDomoServiceImageDownloader : SCSearchItemDownloader {

	SCSessionRequestManager* _requestManager;

}
-(BOOL)isItemValid:(id)arg1 ;
-(id)decryptData:(id)arg1 withItem:(id)arg2 ;
-(id)resultFromData:(id)arg1 withItem:(id)arg2 ;
-(id)cacheKeyForItem:(id)arg1 ;
-(id)requestForItem:(id)arg1 ;
-(id)downloadPerformer;
-(id)cache;
-(id)initWithRequestManager:(id)arg1 ;
-(id)requestManager;
@end

