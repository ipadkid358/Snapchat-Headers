/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet;

@interface SCStickerPickerDataSourceUpdateHint : NSObject {

	NSIndexSet* _inserts;
	NSIndexSet* _updates;
	NSIndexSet* _deletes;

}

@property (nonatomic,copy,readonly) NSIndexSet * inserts;              //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * deletes;              //@synthesize deletes=_deletes - In the implementation block
+(id)updateHintFromMergingHints:(id)arg1 ;
-(id)initWithInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 ;
-(id)description;
-(NSIndexSet *)updates;
-(NSIndexSet *)inserts;
-(NSIndexSet *)deletes;
@end

