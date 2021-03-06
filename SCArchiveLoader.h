/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTimeProfilable.h>

@class NSString, NSMutableArray, SCQueuePerformer;

@interface SCArchiveLoader : NSObject <SCTimeProfilable> {

	Class _class;
	NSString* _path;
	/*^block*/id _completion;
	NSMutableArray* _loadedFromDiskCallbacks;
	SCQueuePerformer* _queuePerformer;
	unsigned long long _loadState;

}

@property (nonatomic,readonly) SCQueuePerformer * queuePerformer;              //@synthesize queuePerformer=_queuePerformer - In the implementation block
@property (assign,nonatomic) unsigned long long loadState;                     //@synthesize loadState=_loadState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(SCQueuePerformer *)queuePerformer;
-(void)_unarchive;
-(void)_didFinishLoadingFromDiskWithObject:(id)arg1 ;
-(id)initWithClass:(Class)arg1 fileName:(id)arg2 ;
-(void)loadFromDiskAsync:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)markAsLoadedWithoutLoadingFromDiskWithCompletion:(/*^block*/id)arg1 ;
-(void)waitUntilLoadFromDiskCallback:(/*^block*/id)arg1 ;
-(BOOL)saveObject:(id)arg1 ;
-(void)setLoadState:(unsigned long long)arg1 ;
-(unsigned long long)loadState;
@end

