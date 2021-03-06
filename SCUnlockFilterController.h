/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol SCUnlockFilterControllerDelegate, SCPerforming;
@class NSMutableArray;

@interface SCUnlockFilterController : NSObject <NSCoding> {

	id<SCUnlockFilterControllerDelegate> _delegate;
	NSMutableArray* _unlockedFilters;
	id<SCPerforming> _performer;

}

@property (nonatomic,retain) NSMutableArray * unlockedFilters;                                  //@synthesize unlockedFilters=_unlockedFilters - In the implementation block
@property (nonatomic,retain) id<SCPerforming> performer;                                        //@synthesize performer=_performer - In the implementation block
@property (assign,nonatomic,__weak) id<SCUnlockFilterControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SCPerforming>)performer;
-(void)setPerformer:(id<SCPerforming>)arg1 ;
-(void)_ensureNonNilObjects;
-(void)removeFromCache:(id)arg1 ;
-(void)processUnlockedFilterResponse:(id)arg1 ;
-(NSMutableArray *)unlockedFilters;
-(void)setUnlockedFilters:(NSMutableArray *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SCUnlockFilterControllerDelegate>)arg1 ;
-(id<SCUnlockFilterControllerDelegate>)delegate;
-(void)clearCache;
-(void)updateCache;
@end

