/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class SCQueuePerformer, PHAsset, NSObject, NSString;

@interface SCGalleryPhotoLibraryObserver : NSObject <PHPhotoLibraryChangeObserver> {

	SCQueuePerformer* _performer;
	PHAsset* _asset;
	/*^block*/id _changeHandler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observe:(id)arg1 queue:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg1 ;
@end

