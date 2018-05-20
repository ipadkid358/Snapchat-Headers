/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SCFriendFilter : NSObject {

	NSMutableArray* _baseFilterGroup;

}

@property (nonatomic,retain) NSMutableArray * baseFilterGroup;              //@synthesize baseFilterGroup=_baseFilterGroup - In the implementation block
-(id)initWithFilterGroup:(id)arg1 ;
-(id)filterByUsername:(id)arg1 ;
-(id)filterbyDisplayAndUserNames:(id)arg1 ;
-(id)filterByOfficialStorySearchQuery:(id)arg1 ;
-(id)filterWithPrefix:(id)arg1 ;
-(void)setBaseFilterGroup:(NSMutableArray *)arg1 ;
-(NSMutableArray *)baseFilterGroup;
-(void)addToFilterGroup:(id)arg1 ;
-(void)removeFromFilterGroup:(id)arg1 ;
-(id)filterByDisplayName:(id)arg1 ;
-(id)filterbyPartialName:(id)arg1 ;
-(id)filter:(id)arg1 ;
@end

