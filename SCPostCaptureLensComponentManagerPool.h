/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLRUCacheDelegate.h>

@class SCLensDownloadableContent, SCLRUCache, NSString;

@interface SCPostCaptureLensComponentManagerPool : NSObject <SCLRUCacheDelegate> {

	SCLensDownloadableContent* _lensDownloadableContent;
	BOOL _trackingEnabled;
	SCLRUCache* _componentManagersCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cache:(id)arg1 didEvictObject:(id)arg2 forKey:(id)arg3 ;
-(id)initWithLensDownloadableContent:(id)arg1 trackingEnabled:(BOOL)arg2 poolSize:(unsigned long long)arg3 ;
-(id)lensComponentManagerForImageProcessContext:(id)arg1 ;
-(id)_newLensComponentManagerForImageProcessContext:(id)arg1 ;
-(void)dealloc;
@end
