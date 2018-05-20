/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSMutableArray;

@interface SCFriendSearchTrie : NSObject <NSCoding> {

	NSMutableDictionary* _children;
	NSMutableArray* _results;

}
+(/*^block*/id)_friendSearchTrieWordComparator;
-(void)_insertFriendSearchTrieWord:(id)arg1 depth:(unsigned long long)arg2 ;
-(id)_userIdsWithPrefix:(id)arg1 depth:(long long)arg2 ;
-(void)insertFriendSearchTrieWord:(id)arg1 ;
-(id)userIdsWithPrefix:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)results;
-(id)mutableResults;
@end

