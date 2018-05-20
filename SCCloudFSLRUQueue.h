/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class NSMutableDictionary, NSMutableOrderedSet;

@interface SCCloudFSLRUQueue : NSObject {

	id<SCPerforming> _performer;
	NSMutableDictionary* _hashSet;
	NSMutableOrderedSet* _queue;
	long long _storageSize;
	long long _storageSizeLimit;

}

@property (nonatomic,readonly) long long storageSize;                   //@synthesize storageSize=_storageSize - In the implementation block
@property (nonatomic,readonly) long long storageSizeLimit;              //@synthesize storageSizeLimit=_storageSizeLimit - In the implementation block
-(long long)storageSize;
-(id)initWithStorageSizeLimit:(long long)arg1 performer:(id)arg2 ;
-(id)itemForHashString:(id)arg1 ;
-(double)highestOrder;
-(BOOL)isUndercapacity;
-(id)evictItem;
-(long long)storageSizeLimit;
-(void)insertItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
@end

